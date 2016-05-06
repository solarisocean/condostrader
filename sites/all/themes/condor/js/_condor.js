/* Implement custom javascript here */
(function ($, Drupal) {
    
    /*
     * Toggle class on click search button.
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

    /**
     * Init sliders on homepage.
     */
    Drupal.behaviors.mainSliders = {
        attach: function (context, settings) {

            $('.newly-listed-slider .view-content').addClass('swiper-wrapper');

            $('.newly-listed').prepend('<div class="newly-listed-slider-button-next swiper-button-next"></div><div class="newly-listed-slider-button-prev swiper-button-prev"></div>');

            var newlyListedSlider = new Swiper('.newly-listed-slider', {
                slidesPerView: 4,
                slidesPerColumn: 2,
                paginationClickable: true,
                spaceBetween: 25,
                nextButton: '.newly-listed-slider-button-next',
                prevButton: '.newly-listed-slider-button-prev',
            });
        }
    };

})(jQuery, Drupal);