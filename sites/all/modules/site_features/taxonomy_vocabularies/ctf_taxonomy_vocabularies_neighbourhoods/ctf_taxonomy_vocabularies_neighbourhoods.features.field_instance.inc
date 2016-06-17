<?php
/**
 * @file
 * ctf_taxonomy_vocabularies_neighbourhoods.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function ctf_taxonomy_vocabularies_neighbourhoods_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'taxonomy_term-neighbourhoods-field_community_code'.
  $field_instances['taxonomy_term-neighbourhoods-field_community_code'] = array(
    'bundle' => 'neighbourhoods',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_community_code',
    'label' => 'Community code',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'taxonomy_term-neighbourhoods-field_community_geolocation'.
  $field_instances['taxonomy_term-neighbourhoods-field_community_geolocation'] = array(
    'bundle' => 'neighbourhoods',
    'default_value' => array(),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'leaflet',
        'settings' => array(
          'height' => 500,
          'icon' => array(
            'html' => '',
            'htmlClass' => '',
            'iconAnchor' => array(
              'x' => '',
              'y' => '',
            ),
            'iconImageStyle' => '',
            'iconSize' => array(
              'x' => '',
              'y' => '',
            ),
            'iconType' => 'marker',
            'iconUrl' => '',
            'popupAnchor' => array(
              'x' => '',
              'y' => '',
            ),
            'shadowAnchor' => array(
              'x' => '',
              'y' => '',
            ),
            'shadowUrl' => '',
          ),
          'leaflet_map' => 'esri-world_street_map',
          'popup' => array(
            'show' => 0,
            'text' => 'text',
          ),
          'vector_display' => array(
            'clickable' => 1,
            'color' => '#8955A0',
            'dashArray' => '',
            'fill' => 1,
            'fillColor' => '#584A55',
            'fillOpacity' => 0.4,
            'opacity' => '',
            'stroke' => 1,
            'stroke_override' => 1,
            'weight' => 3,
          ),
          'zoom' => array(
            'initialZoom' => -1,
            'maxZoom' => -1,
            'minZoom' => 1,
            'scrollWheelZoom' => 1,
          ),
        ),
        'type' => 'geofield_leaflet',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_community_geolocation',
    'label' => 'Community geolocation',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'geofield',
      'settings' => array(
        'geocoder' => array(
          'enabled' => 1,
          'handler' => 'google',
        ),
        'map' => array(
          'auto_center' => 1,
          'base_url' => '//services.arcgisonline.com/ArcGIS/rest/services/World_Street_Map/MapServer/tile/{z}/{y}/{x}.png',
          'center' => array(
            'lat' => 50,
            'lng' => 70,
          ),
          'zoom' => 10,
        ),
      ),
      'type' => 'geofield_geojson',
      'weight' => 3,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Community code');
  t('Community geolocation');

  return $field_instances;
}
