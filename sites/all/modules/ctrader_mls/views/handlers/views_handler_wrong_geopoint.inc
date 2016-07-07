<?php

/**
 * Embeds mortgage calculator.
 */
class views_handler_wrong_geopoint extends views_handler_field {
  public function query() {
    $this->ensure_my_table();
    // Add the field.
    $params = $this->options['group_type'] != 'group' ? array('function' => $this->options['group_type']) : array();
    $this->field_alias = array();
    $this->field_alias[] = $this->query->add_field('field_data_field_search_point_string', 'field_search_point_string_value', NULL, $params);
    $this->field_alias[] = $this->query->add_field('field_data_field_city_region__torcond', 'field_city_region__torcond_tid', NULL, $params);
    $this->add_additional_fields();
  }

  public function option_definition() {
    $options = parent::option_definition();

    // Override the alter text option to always alter the text.
    $options['alter']['contains']['alter_text'] = array('default' => TRUE);
    return $options;
  }

  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);
  }

  public function render($values) {
    $point = isset($values->field_data_field_search_point_string_field_search_point_stri) ? $values->field_data_field_search_point_string_field_search_point_stri : NULL;
    $listing_term = isset($values->field_data_field_city_region__torcond_field_city_region__tor) ? $values->field_data_field_city_region__torcond_field_city_region__tor : NULL;
    if ($point && $listing_term) {
      require_once DRUPAL_ROOT . '/' . drupal_get_path('module', 'ctrader_map') . '/classes/pointLocation.php';
      $pointLocation = new pointLocation();
      $point = explode(',', $point);
      $point = array_reverse($point);
      $point = implode(' ', $point);
      $found_correct_region = FALSE;

      if (!isset($_SESSION['neighbourhoods_terms_polygons_data'])) {
        $vid = taxonomy_vocabulary_machine_name_load('neighbourhoods'); //Neighbourhoods vocabulary.
        $vid = $vid->vid;
        $vocabulary_term_entities = taxonomy_get_tree($vid, 0, 3, TRUE);
        $terms_polygon = array();
        foreach ($vocabulary_term_entities as $tax_term) {
          $tax_term_id = $tax_term->tid;
          $polygon = isset($tax_term->field_community_geolocation[LANGUAGE_NONE][0]['geom']) ? $tax_term->field_community_geolocation[LANGUAGE_NONE][0]['geom'] : NULL;
          if ($polygon !== NULL && $polygon != 'GEOMETRYCOLLECTION EMPTY') {
            if (strrpos($tax_term->field_community_geolocation[LANGUAGE_NONE][0]['geom'], 'MULTIPOLYGON') === FALSE) {
              $polygon = $tax_term->field_community_geolocation[LANGUAGE_NONE][0]['geom'];
              $polygon = str_replace(array(
                'POLYGON ',
                '(',
                ')'
              ), '', $polygon);
              $polygon = explode(', ', $polygon);
              $terms_polygon[$tax_term_id] = $polygon;
            }
            elseif (strrpos($tax_term->field_community_geolocation[LANGUAGE_NONE][0]['geom'], 'MULTIPOLYGON') !== FALSE) {
              $polygon = $tax_term->field_community_geolocation[LANGUAGE_NONE][0]['geom'];
              $polygon = str_replace(array(
                'MULTIPOLYGON ',
                '((',
                '))'
              ), '', $polygon);
              $polygon = str_replace('), (', '*', $polygon);
              $polygon = str_replace(array(')', '('), '', $polygon);
              $multi_polygon_array = explode('*', $polygon);
              $multi_polygon = array();
              foreach ($multi_polygon_array as $polygon) {
                $polygon = explode(', ', $polygon);
                $multi_polygon[] = $polygon;
              }
              $terms_polygon[$tax_term_id] = $multi_polygon;
            }
          }
        }
        $_SESSION['neighbourhoods_terms_polygons_data'] = $terms_polygon;
      }

      $terms_polygon = $_SESSION['neighbourhoods_terms_polygons_data'];
      if (isset($terms_polygon[$listing_term])) {
        $check = $pointLocation->pointInPolygon($point, $terms_polygon[$listing_term]);
        if ($check == 'inside') {
          $found_correct_region = TRUE;
        }
        return $found_correct_region ? 'inside' : '=== OUT ===';
      }

    }
    return $listing_term ? 'Has no geopoint' : 'Has no term';
  }
}
