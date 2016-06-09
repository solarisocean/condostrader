(function ($) {

  Drupal.behaviors.initBehavior = {
    attach: function (context) {

      setTimeout(function () {
        if ($('body').hasClass('page-search-results')) {
          $("#mapid").height($('.main').outerHeight());
        }
      }, 1);

        if ($('body').hasClass('page-user-register')) {
          $("#mapid").height(380);
        }
    }
  };

  Drupal.behaviors.regionHierarchical = {
    attach: function (context) {
      var parent = $('.neighbourhoods-hierarchical select:first-child option');
      parent.each(function () {

        // Hides all cities options except few and 'any' label.
        var cities = ['Toronto', 'York', 'York Region', 'Peel', 'Halton'];
        if($.inArray($(this).html(), cities) === -1) {
          if($(this).val() != 'label_0') {
            $(this).hide();
          }
        }
      });

      var taxOnUserRegister = $('.form-item.form-type-hierarchical-select.form-item-user-region-und select:first-child option');
      taxOnUserRegister.each(function () {

        // Hides all cities options except few and 'any' label.
        var cities = ['Toronto', 'York', 'York Region', 'Peel', 'Halton'];
        if($.inArray($(this).html(), cities) === -1) {
          if($(this).val() != 'label_0') {
            $(this).hide();
          }
        }
      });
      // Hides third level on hierarchical select.
      //$('.neighbourhoods-hierarchical .selects select.form-select:nth-child(3)').remove();
    }
  };

})(jQuery);
