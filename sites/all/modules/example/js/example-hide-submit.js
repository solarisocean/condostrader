(function($){
  /**
   * Hide submit button in select widget facet.
   **/
  Drupal.behaviors.ExampleHideSubmit = {
  attach: function(context) {
    $('.example-select-facet input.ctools-auto-submit-click:not(.example-hide-submit-processed)', context)
    .addClass('example-hide-submit-processed').hide();
  }}

})(jQuery);