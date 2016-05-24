(function ($) {

  Drupal.behaviors.initBehavior = {
    attach: function (context) {

      setTimeout(function () {
        $("#mapid").height($('.main').outerHeight());
      }, 1);

    }
  };

})(jQuery);
