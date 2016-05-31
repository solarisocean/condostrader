(function ($) {

  Drupal.behaviors.initBehavior = {
    attach: function (context) {

      setTimeout(function () {
        $("#mapid").height($('.main').outerHeight());
      }, 1);

    }
  };

  Drupal.behaviors.regionHierarchical = {
    attach: function (context) {
      var parent = $('.neighbourhoods-hierarchical select:first-child option');
      parent.each(function () {
        if ($(this).attr('value') == 577 || $(this).attr('value') == 579) {
          $(this).remove();
        }

        if ($(this).html().match("^grandparent_0") || $(this).html().match("^grandparent_5")) {
          $(this).remove();
        }
      });

      //  $('.neighbourhoods-hierarchical .form-select').chosen({
      //    'disable_search': true
      //  });
      //
      //  $('.neighbourhoods-hierarchical .selects').css('width', '200px');
    }
  };

})(jQuery);
