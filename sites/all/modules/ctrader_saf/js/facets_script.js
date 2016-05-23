(function ($) {

  Drupal.behaviors.initBehavior = {
    attach: function (context) {
      var mapheight = $(window).height() - ($('nav.top-bar').height() + $('#admin-menu').height() + 30);
      // $("#mapid").height(mapheight);
    }
  };

})(jQuery);
