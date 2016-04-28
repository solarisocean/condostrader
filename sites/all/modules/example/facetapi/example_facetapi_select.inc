<?php

class ExampleFacetapiSelect extends FacetapiWidget {
   /**
   * Renders the form.
   */
  public function execute() {
    $element = &$this->build[$this->facet['field alias']];
    $name = array_pop(explode(':', $this->build['#settings']->name));
    $element = drupal_get_form('example_facetapi_select_' .  $name, $element);
  }
}


/**
 * Generate form for facet.
 */
function example_facetapi_select($form, &$form_state, $elements) {

  // Build options from facet elements.
  $options = array('' => t('- Select -'));
  foreach ($elements as $element) {
    if ($element['#active']) {
      continue;
    }
    $options[serialize($element['#query'])] = $element['#markup'] . '(' . $element['#count'] . ')';
  }
  if (count($options) == 1) {
    return;
  }
  $form['select'] = array(
    '#type' => 'select',
    '#options' => $options,
    '#attributes' => array('class' => array('ctools-auto-submit')),
    'default_value' => '',
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Filter'),
    '#attributes' => array('class' => array('ctools-use-ajax', 'ctools-auto-submit-click')),
    '#submit' => array('example_facetapi_select_submit'),
  );

  // Lets add autosubmit js functionality from ctools.
  $form['#attached']['js'][] = drupal_get_path('module', 'ctools') . '/js/auto-submit.js';
  // Add javascript that hides Filter button.
  $form['#attached']['js'][] = drupal_get_path('module', 'example') . '/js/example-hide-submit.js';

  $form['#attributes']['class'][] = 'example-select-facet';

  return $form;
}

/**
 * Submit handler for facet form.
 */
function example_facetapi_select_submit($form, &$form_state) {
  $form_state['redirect'] = array($_GET['q'], array('query' => unserialize($form_state['values']['select'])));
}
