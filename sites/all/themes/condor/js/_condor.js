/* Implement custom javascript here */
(function ($, Drupal) {
    
    /*
     * Toggle class on click menu button.
     */
    Drupal.behaviors.searchButton = {
        attach: function (context, settings) {
            $('#search-button').on('click', function (e) {
                e.preventDefault();
                $('#searchmenu-form').toggleClass('search-visible');
            });
        }
    };

    /**
     * Add script to main menu.
     */
    Drupal.behaviors.mainMenu = {
        attach: function (context, settings) {

            $(".menu-button").click(function(e) {
                e.preventDefault();

                if ($(this).hasClass('menu-open')) {
                    $("#main-menu-nav-tree").hide("drop", { direction: "right" }, "easeInQuad");
                    $(this).removeClass('menu-open');
                }
                else {
                    $(this).addClass('menu-open');
                    $("#main-menu-nav-tree").show("drop", { direction: "right" }, "easeInQuad");
                }
            });

            $('.main-nav-tree').first().find('a').each(function() {
                if ($(this).parent().find('ul').length > 0) {
                    $(this).on('click', function(e) {
                        e.preventDefault();
                        var target = e.target;
                        var subItem = $(target).next();
                        var depth = $(subItem).parents().length;
                        var allAtDepth = $('.main-nav-tree').first().find('ul').filter(function() {
                            if ($(this).parents().length >= depth && this !== subItem.get(0)) {
                                return true;
                            }
                        });
                        
                        $(allAtDepth).slideUp(300, "easeInQuad");
                        subItem.slideToggle(300, "easeInQuad");

                    });
                }
            });

        }
    };

})(jQuery, Drupal);