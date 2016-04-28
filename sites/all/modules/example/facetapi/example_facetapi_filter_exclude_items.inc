<?php

/**
 * Plugin that filters active items.
 */
class ExampleFacetapiFilterExcludeItems extends FacetapiFilter {

  /**
   * Filters facet items.
   */
  public function execute(array $build) {
    $exclude_string = $this->settings->settings['exclude'];
    $exclude_array = explode(',', $exclude_string);
    // Exclude item if its markup is one of excluded items.
    $filtered_build = array();
    foreach ($build as $key => $item) {
      if (in_array($item['#markup'], $exclude_array)) {
        continue;
      }
      $filtered_build[$key] = $item;
    }

    return $filtered_build;
  }

  /**
   * Adds settings to the filter form.
   */
  public function settingsForm(&$form, &$form_state) {
    $form['exclude'] = array(
      '#title' => t('Exclude items'),
      '#type' => 'textfield',
      '#description' => t('Coma separated list of titles that should be excluded'),
      '#default_value' => $this->settings->settings['exclude'],
    );
  }

  /**
   * Returns an array of default settings
   */
  public function getDefaultSettings() {
    return array('exclude' => '');
  }
}
