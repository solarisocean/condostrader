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
            $('.newly-listed-slider .view-content, .recent-blog-post .view-content').addClass('swiper-wrapper');

            $('.newly-listed').prepend('<div class="newly-listed-slider-button-next swiper-button-next"></div><div class="newly-listed-slider-button-prev swiper-button-prev"></div>');
            $('.recent-post-front').prepend('<div class="recent-post-front-slider-button-next swiper-button-next"></div><div class="recent-post-front-slider-button-prev swiper-button-prev"></div>');

            var newlyListedSlider = new Swiper('.newly-listed-slider', {
                slidesPerView: 4,
                slidesPerColumn: 2,
                paginationClickable: true,
                spaceBetween: 25,
                nextButton: '.newly-listed-slider-button-next',
                prevButton: '.newly-listed-slider-button-prev'
            });

            var recentBlogPost = new Swiper('.recent-blog-post', {
                slidesPerView: 4,
                slidesPerColumn: 1,
                paginationClickable: true,
                spaceBetween: 25,
                nextButton: '.recent-post-front-slider-button-next',
                prevButton: '.recent-post-front-slider-button-prev'
            });
        }
    };

    /**
     * Init custom scrollbars on front page.
     */
    Drupal.behaviors.scrollBar = {
        attach: function (context, settings) {

            $('.view-lowest-price-block, .view-highest-price-block, .view-most-viewed-block').mCustomScrollbar({
                setHeight: "404px",
                theme: "inset-2"
            });

        }
    };

    /**
     * Make facets checkboxes like radiobutton.
     */
    Drupal.behaviors.facetFix = {
        attach: function (context, settings) {

            var checkRadio = function(elem) {
                elem.each(function () {
                   if($(this).attr('checked')) {
                       $(this).parent().addClass('active-region-facet');
                   }
                });

                elem.on('click', function() {
                    elem.attr("checked", false).parent().removeClass('active-region-facet');
                    $(this).attr("checked", true).parent().addClass('active-region-facet');
                });

                elem.parent().find('a').on('click', function(e) {
                    e.preventDefault();
                    elem.attr('disabled', false).parent().removeClass('facetapi-inactive');
                    elem.closest('ul').removeClass('facetapi-disabled');
                    elem.attr("checked", false).parent().removeClass('active-region-facet');
                    $(this).parent().find('input:checkbox').attr("checked", true).parent().addClass('active-region-facet');
                });
            };

            checkRadio($('#facetapi-facet-search-apitoronto-condo-index-block-field-s-r-torcond input:checkbox'));
            checkRadio($('#facetapi-facet-search-apitoronto-condo-index-block-field-br-torcond input:checkbox'));

            $('.facetapi-facet-field-locker--torcond a, .facetapi-facet-field-prkg-inc--torcond a, .facetapi-facet-field-pets--torcond a').on('click', function (e) {
                var chbxInput = $(this).parent().find('input');

                e.preventDefault();
                var _this = $(this);
                $(this).closest('.facetapi-facetapi-checkbox-links').removeClass('facetapi-disabled');
                chbxInput.attr('disabled', false).parent();
                if (chbxInput.attr('checked')) {
                    _this.removeClass('checked-facet');
                    chbxInput.removeAttr('checked');
                }
                else {
                    _this.addClass('checked-facet');
                    chbxInput.attr('checked', true);
                }
            })
        }
    };

})(jQuery, Drupal);