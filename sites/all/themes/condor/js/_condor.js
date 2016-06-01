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

            $('body').once(function() {
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

            $('.page-search-results .view-search-results-ctrader .view-content').mCustomScrollbar({
                setHeight: "675px",
                theme: "inset-2"
            });

        }
    };

    /**
     * Make facets checkboxes like radiobutton.
     */
    Drupal.behaviors.facetFix = {
        attach: function (context, settings) {

            var radioCheck = function(elem){
                elem.each(function() {
                    if($(this).attr('checked')) {
                        $(this).parent().addClass('active-region-facet');
                    }
                });

                elem.parent().find('a').on('click', function(e) {
                    e.preventDefault();
                    $(this).closest('ul').removeClass('facetapi-disabled');
                    $(this).parent().removeClass('facetapi-inactive');
                    $(this).parent().find('input:checkbox').attr('disabled', false);
                    elem.parent().removeClass('active-region-facet');
                    $(this).parent().addClass('active-region-facet').find('input:checkbox').trigger('click');
                });

                elem.on('change', function() {
                    elem.not(this).prop('checked', false);
                });

            };
            
            radioCheck($('.facetapi-facet-field-br--torcond input:checkbox'));
            radioCheck($('.facetapi-facet-field-s-r--torcond input:checkbox'));

            var checkboxes = [
                '.facetapi-facet-field-locker--torcond input:checkbox',
                '.facetapi-facet-field-prkg-inc--torcond input:checkbox',
                '.facetapi-facet-field-pets--torcond input:checkbox'
            ];

            for (var i = 0; i < checkboxes.length; i++) {
                if ($(checkboxes[i]).attr('checked')) {
                    //Added class to checked checkbox.
                    $(checkboxes[i]).parent().find('a').addClass('checked-facet');
                }
            }

            $('.facetapi-facet-field-locker--torcond a, .facetapi-facet-field-prkg-inc--torcond a, .facetapi-facet-field-pets--torcond a').on('click', function (e) {
                var chbxInput = $(this).parent().find('input');

                e.preventDefault();
                var _this = $(this);
                $(this).closest('.facetapi-facetapi-checkbox-links').removeClass('facetapi-disabled');
                chbxInput.attr('disabled', false).parent();
                if (chbxInput.attr('checked')) {
                    _this.removeClass('checked-facet');
                    chbxInput.trigger('click');
                }
                else {
                    _this.addClass('checked-facet');
                    chbxInput.trigger('click');
                }
            });

            $('.facetapi-facetapi-select-dropdowns select, .result-filter-block select').chosen({
                "disable_search": true
            });

        }
    };

    /**
     * Make view search results ajax load. 
     */
    Drupal.behaviors.viewsAuto = {
        attach: function (context, settings) {

            var loadMore = function(block) {

                var container = $(block).find('.mCSB_container'),
                            pager = block + ' .item-list .pager',
                          button = $(block).find('.search-results-load-more'),
                   numberEnd = block + ' .view-header .end';

                button.on('click', function() {
                    var nextPage = $(block + ' .pager-next a').attr('href');

                    $.ajax({
                        url: nextPage,
                        context: context,
                        beforeSend: function() {
                            button.addClass('load');
                        },
                        success: function () {
                            button.removeClass('load');
                        }
                    }).done(function(data) {
                        $(data).find(block + ' .views-row').appendTo(container).hide().fadeIn("slow");
                        $(pager).replaceWith($(data).find(pager));

                        $({Counter: $(numberEnd + ' b').text()}).animate({Counter: $(data).find(numberEnd).text()}, {
                            duration: 1500,
                            easing: 'swing',
                            step: function () {
                                $(numberEnd + ' b').text(Math.ceil(this.Counter));
                            }
                        });

                        if ($(data).find(pager).find('.pager-next a').attr('href') !== undefined) {
                            button.appendTo(container);
                        } else {
                            button.remove();
                        }
                    });
                });
            };

            loadMore('.listing-result-page');
            loadMore('.building-result-page');

        }
    };

    /**
     * Make autosubmit in exposed filter on result page.
     */
    Drupal.behaviors.exposedAuto = {
        attach: function (context, settings) {

            $('.views-widget-sort-sort_bef_combine .form-select').change(function() {
                if ($(this).val().length != 1) {
                    $(this).closest('.views-exposed-form').find('.form-submit').trigger('click');
                }
            });
        }
    };

    /**
     * Fixed total building and listing quantity in tab title.
     */
    Drupal.behaviors.tabsTotal = {
        attach: function (context, settings) {

            $('body').once(function() {
                /**
                 * Implementing tabs functionality.
                 *
                 * @param {array} tabs This is param with array of tab pages.
                 * @param {string} pager This is param with string selector tabs pager.
                 */
                var tabs = function (tabs, pager) {
                    for (var i = 0; i < tabs.length; i++) {
                        $(pager).find('a' + tabs[i] + '-tab span').text($(tabs[i] + ' .total-quantity').text());
                        $(tabs[i]).not(tabs[0]).hide();
                    }

                    $(pager + ' ' + tabs[0] + '-tab').addClass('active');

                    $(pager + ' a').on('click', function(e) {
                        e.preventDefault();
                        $(pager + ' a').removeClass('active');
                        $(this).addClass('active');

                        var activePage = $(this)[0].id;

                        for (var it = 0; it < tabs.length; it++) {
                            $(tabs[it]).not('.' + activePage).hide();
                            $('.' + activePage).fadeIn(500);
                        }
                    });

                };

                var resultPageTabs = [
                    '.listing-result-page',
                    '.building-result-page'
                ];
                tabs(resultPageTabs, '#result-page-tabs');
            });


        }
    };

    /**
     * Nearby listed page slider and gallery.
     */
    Drupal.behaviors.nearbyListedPage = {
        attach: function (context, settings) {

            $('body').once(function() {
                $('.nearby-listed-slider .view-content').addClass('swiper-wrapper');

                $('.pane-nearby-listings').prepend('<div class="nearby-listed-slider-button-next swiper-button-next"></div><div class="nearby-listed-slider-button-prev swiper-button-prev"></div>');

                var nearbyListedSlider = new Swiper('.nearby-listed-slider', {
                    slidesPerView: 5,
                    slidesPerColumn: 1,
                    paginationClickable: true,
                    spaceBetween: 25,
                    nextButton: '.nearby-listed-slider-button-next',
                    prevButton: '.nearby-listed-slider-button-prev'
                });

                $('.condo-page-gallery .pane-content, .condo-page-pagination .pane-content').addClass('swiper-container');
                $('.condo-page-gallery .field-name-field-toronto-gallery, .condo-page-pagination .field-name-field-toronto-gallery').addClass('swiper-wrapper');
                $('.condo-page-gallery .field-name-field-toronto-gallery img, .condo-page-pagination .field-name-field-toronto-gallery img').addClass('swiper-slide');

                var gallery = new Swiper('.condo-page-gallery .pane-content', {});
                var pagination = new Swiper('.condo-page-pagination .pane-content', {
                    direction: 'vertical',
                    slidesPerView: 3.5,
                    spaceBetween: 30,
                    slideToClickedSlide: true,
                    touchRatio: 0.2,
                    centeredSlides: false
                });

                gallery.params.control = pagination;
                pagination.params.control = gallery;

                // var galleryTop = new Swiper('.condo-page-gallery .pane-content', {
                //     nextButton: '.swiper-button-next',
                //     prevButton: '.swiper-button-prev',
                //     onSlideChangeEnd: function(swiper){
                //         var activeIndex = swiper.activeIndex;
                //         $(galleryThumbs.slides).removeClass('is-selected');
                //         $(galleryThumbs.slides).eq(activeIndex).addClass('is-selected');
                //         galleryThumbs.slideTo(activeIndex,1, false);
                //     }
                // });
                //
                // var galleryThumbs = new Swiper('.condo-page-pagination .pane-content', {
                //     spaceBetween: 30,
                //     freeMode: false,
                //     centeredSlides: false,
                //     slidesPerView: 3.5,
                //     touchRatio: 0.2,
                //     direction: 'vertical',
                //     onClick: function (swiper, event){
                //         var clicked = swiper.clickedIndex
                //         swiper.activeIndex = clicked; //don't need this
                //         swiper.updateClasses() //don't need this
                //         $(swiper.slides).removeClass('is-selected');
                //         $(swiper.clickedSlide).addClass('is-selected');
                //         galleryTop.slideTo(clicked,1, false);
                //
                //     }
                // });
                

            });


        }
    };

})(jQuery, Drupal);