<?php

/**
 * @file
 * The CondosTrader empty behavior class.
 */


class FacetapiEmptyBehaviorCtrader extends FacetapiEmptyBehavior {

  /**
   * A boolean flagging whether the input format is set, FALSE means it is
   * being pulled from FacetapiEmptyBehavior::getDefaultSettings().
   *
   * @var bool
   */
  protected $formatSet = FALSE;

  /**
   * Overrides FacetapiEmptyBehavior::__construct().
   *
   * Checks if a format was selected, calls parent's constructor.
   */
  public function __construct(stdClass $settings) {
    if (isset($settings->settings['empty_text']['format'])) {
      $this->formatSet = TRUE;
    }
    parent::__construct($settings);
  }

  /**
   * Returns the render array used for the facet that is empty, or has no items.
   *
   * @return array()
   * The element's render array.
   */
  public function execute() {
    $data = NULL;

    // searcher - search_api@toronto_condo_index

    // $realm_name - block


    // Test block visibility.
    $searcher = current_search_get_block_searcher(TRUE);
    $filters['facet'] = facetapi_facet_load('field_lp_dol__torcond', $searcher);

    // Makes sure the adapter and configuration can be loaded.
    $adapter = facetapi_adapter_load($searcher);



    return array('#markup' => '-*-');
  }
}
