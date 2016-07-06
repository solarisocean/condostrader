/* Implement custom javascript here */
(function ($, Drupal) {

    /*
     * Global functions attached to Drupal settings.
     */
    Drupal.behaviors.globalFunc = {
        attach: function (context, settings) {

            var allFunction = settings.globalFunc = {};

            // Function to detect mobile device.
            allFunction.detectMob= function () {
                return !!(navigator.userAgent.match(/Android/i)
                || navigator.userAgent.match(/webOS/i)
                || navigator.userAgent.match(/iPhone/i)
                || navigator.userAgent.match(/iPad/i)
                || navigator.userAgent.match(/iPod/i)
                || navigator.userAgent.match(/BlackBerry/i)
                || navigator.userAgent.match(/Windows Phone/i));
            };

        }
    };
    
    /*
     * Toggle class on click search button.
     */
    Drupal.behaviors.searchButton = {
        attach: function (context, settings) {

            $('#search-button').on('click', function (e) {
                e.preventDefault();
                $('#views-exposed-form-search-results-ctrader-page-3').toggleClass('search-visible');
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

            $('body').once(function() {
                if ($('.newly-listed-slider .view-content .views-row').length >= 5) {
                    $('.newly-listed').prepend('<div class="newly-listed-slider-button-next swiper-button-next"></div><div class="newly-listed-slider-button-prev swiper-button-prev"></div>');
                    var newlyListedSlider = new Swiper('.newly-listed-slider', {
                        slidesPerView: 4,
                        slidesPerColumn: 2,
                        paginationClickable: true,
                        spaceBetween: 25,
                        breakpoints: {
                            640 : {
                                slidesPerView: 1
                            },
                            768: {
                                slidesPerView: 3
                            }
                        },
                        nextButton: '.newly-listed-slider-button-next',
                        prevButton: '.newly-listed-slider-button-prev'
                    });
                }

                if ($('.recent-blog-post .view-content .views-row').length >= 5) {
                    $('.recent-post-front').prepend('<div class="recent-post-front-slider-button-next swiper-button-next"></div><div class="recent-post-front-slider-button-prev swiper-button-prev"></div>');
                    var recentBlogPost = new Swiper('.recent-blog-post', {
                        slidesPerView: 4,
                        slidesPerColumn: 1,
                        paginationClickable: true,
                        spaceBetween: 25,
                        breakpoints: {
                            640 : {
                              slidesPerView: 1
                            },
                            768: {
                                slidesPerView: 3
                            }
                        },
                        nextButton: '.recent-post-front-slider-button-next',
                        prevButton: '.recent-post-front-slider-button-prev'
                    });
                }
            });
        }
    };

    /**
     * Init custom scrollbars on front page.
     */
    Drupal.behaviors.scrollBar = {
        attach: function (context, settings) {

            
            if (!settings.globalFunc.detectMob()) {
                $('.view-lowest-price-block .view-content, .view-highest-price-block .view-content, .view-most-viewed-block .view-content').mCustomScrollbar({
                    setHeight: "404px",
                    theme: "inset-2",
                    callbacks: {
                        onTotalScroll:function(){
                            var nextPage = $(this).parent().find('.item-list .pager-next a').attr('href'),
                                loadedBlockSelector =  '.' + $(this).parent().prop("classList")[4],
                                loadedBlock = loadedBlockSelector + ' .view-content .views-row',
                                pager = loadedBlockSelector + ' .item-list .pager',
                                loader = loadedBlockSelector + ' .view-content',
                                scroller = $(this);

                            $.ajax({
                                url: nextPage,
                                context: context,
                                beforeSend: function() {
                                    $(loader).append('<div class="auto-scroll-loader" style="margin-bottom: 50px"></div>');
                                },
                                success: function () {
                                    $('.auto-scroll-loader').remove();
                                }
                            }).done(function(data) {
                                $(data).find(loadedBlock).appendTo(loadedBlockSelector + ' .mCSB_container').hide().fadeIn("slow");
                                $(pager).replaceWith($(data).find(pager));
                                setTimeout(function() {
                                    scroller.mCustomScrollbar('scrollTo','-=350');
                                }, 10);
                            });
                        }
                    }
                });
            }

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

            $('.single-checkbox-facet').live('click', function (e) {
                var chbxInput = $(this).parent().find('input');

                e.preventDefault();
                e.stopPropagation();
                var $this = $(this);
                $(this).closest('.facetapi-facetapi-checkbox-links').removeClass('facetapi-disabled');
                chbxInput.attr('disabled', false).parent();
                if (chbxInput.attr('checked')) {
                    $this.removeClass('checked-facet');
                }
                else {
                    $this.addClass('checked-facet');
                }
                chbxInput.trigger('click');
            });

            $('.facetapi-facet-field-style--torcond select, .views-widget-sort-sort_bef_combine .form-select').chosen({
                "disable_search": true
            });

            //***********************************************************************//

            if ($('.facet-search-block')) {
                var form = '#-ctrader-saf-search-button-form';

                //Reset values on change.
                $('.pane-ctrader-saf-neighbourhoods-hs select').each(function() {
                    $(this).change(function() {

                        if ($(this).val() !== 'label_1' && $(this).val() !== 'label_2') {
                            $.ajax({
                                type: 'POST',
                                url: '/js-singup-map',
                                data: {
                                    'locationSelect': $(this).val()
                                }
                            });
                        }
                        else if ($(this).val() === 'label_1' || $(this).val() === 'label_2') {
                            $.ajax({
                                type: 'POST',
                                url: '/js-singup-map',
                                data: {
                                    'locationSelect': $(this).prev().val()
                                }
                            });
                        }

                        switch ($(this).attr('name').charAt($(this).attr('name').length - 2)) {
                            case '0':
                                $(form + ' input[name="region"]').val($(this).val());
                                $(form + ' input[name="region_1"]').val('');
                                $(form + ' input[name="region_2"]').val('');
                                break;
                            case '1':
                                $(form + ' input[name="region_1"]').val($(this).val());
                                $(form + ' input[name="region_2"]').val('');
                                break;
                            case '2':
                                $(form + ' input[name="region_2"]').val($(this).val());
                                break;
                        }

                        switch ($(this).val()) {
                            case 'label_0':
                                $(form + ' input[name="region"]').val('');
                                $(form + ' input[name="region_1"]').val('');
                                $(form + ' input[name="region_2"]').val('');
                                break;
                            case 'label_1':
                                $(form + ' input[name="region_1"]').val('');
                                $(form + ' input[name="region_2"]').val('');
                                break;
                            case 'label_2':
                                $(form + ' input[name="region_2"]').val('');
                                break;
                        }

                    });
                });

                $('.facetapi-facet-field-s-r--torcond .facetapi-facet a').on('click', function() {
                    $(form + ' input[name="sale_rent"]').val($(this).parent().find('a.facetapi-checkbox').attr('href'));
                });

                var _facetCkeckboxToInput = function(facet, input) {
                    var _input =  form + " input[name='" + input + "']";
                    $(facet + ' a').live('click', function() {
                        if ($(_input).val() == 1) {
                            $(_input).val(0);
                        } else {
                            $(_input).val(1);
                        }
                    });
                };

                _facetCkeckboxToInput('.facetapi-facet-field-locker--torcond', 'locker');
                _facetCkeckboxToInput('.facetapi-facet-field-pets--torcond', 'pets');
                _facetCkeckboxToInput('.facetapi-facet-field-prkg-inc--torcond', 'parking');

                $('.field_style__torcond.form-select').change(function(){
                    $(form + ' input[name="type"]').val($(this).val());
                });

                $('.facetapi-facet-field-br--torcond a').on('click', function() {
                    $(form + ' input[name="beds"]').val($(this).text());
                });
            }

            $('.find-condo-tab').on('click', function(e) {
                e.preventDefault();
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
                        if ($(tabs[i] + ' .total-quantity').text()) {
                            $(pager).find('a' + tabs[i] + '-tab span').text($(tabs[i] + ' .total-quantity').text());
                        } else {
                            $(pager).find('a' + tabs[i] + '-tab span').text(0);
                        }
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

                if ($('.nearby-listed-slider .view-content .views-row').length >= 6) {
                    $('.pane-nearby-listings').prepend('<div class="nearby-listed-slider-button-next swiper-button-next"></div><div class="nearby-listed-slider-button-prev swiper-button-prev"></div>');

                    var nearbyListedSlider = new Swiper('.nearby-listed-slider', {
                        slidesPerView: 5,
                        slidesPerColumn: 1,
                        paginationClickable: true,
                        spaceBetween: 25,
                        breakpoints: {
                            640 : {
                                slidesPerView: 1
                            },
                            768: {
                                slidesPerView: 3
                            }
                        },
                        nextButton: '.nearby-listed-slider-button-next',
                        prevButton: '.nearby-listed-slider-button-prev'
                    });
                }


                $('.condo-page-gallery .pane-content, .condo-page-pagination .pane-content').addClass('swiper-container');
                $('.condo-page-gallery .field-name-field-toronto-gallery, .condo-page-pagination .field-name-field-toronto-gallery').addClass('swiper-wrapper');

                $('.condo-page-gallery .field-name-field-toronto-gallery img').wrap('<div class="swiper-slide"></div>');
                $('.condo-page-pagination .field-name-field-toronto-gallery img').addClass('swiper-slide');

                $('.condo-page-pagination .pane-content').append('<div class="swiper-scrollbar"></div>');
                $('.condo-page-gallery .pane-content').append('<div class="gallery-slider-button-next swiper-button-next"></div><div class="gallery-slider-button-prev swiper-button-prev"></div>');

                var galleryTop = new Swiper('.condo-page-gallery .pane-content', {
                    nextButton: '.gallery-slider-button-next',
                    prevButton: '.gallery-slider-button-prev',
                    onSlideChangeEnd: function(swiper){
                        var activeIndex = swiper.activeIndex;
                        $(galleryThumbs.slides).removeClass('is-selected');
                        $(galleryThumbs.slides).eq(activeIndex).addClass('is-selected');
                        galleryThumbs.slideTo(activeIndex,300, false);
                    }
                });

                var galleryThumbs = new Swiper('.condo-page-pagination .pane-content', {
                    scrollbar: '.swiper-scrollbar',
                    scrollbarHide: false,
                    scrollbarDraggable: true,
                    spaceBetween: 30,
                    freeMode: false,
                    centeredSlides: false,
                    slidesPerView: 3.5,
                    touchRatio: 0.2,
                    direction: 'vertical',
                    breakpoints: {
                        320 : {
                            direction: 'horizontal',
                            slidesPerView: 2
                        },
                        568 : {
                            direction: 'horizontal',
                            slidesPerView: 3
                        },
                        768 : {
                            direction: 'horizontal',
                            slidesPerView: 5
                        },
                        1024 : {
                            direction: 'horizontal',
                            slidesPerView: 5
                        }
                    },
                    onClick: function (swiper, event){
                        var clicked = swiper.clickedIndex;
                        swiper.activeIndex = clicked;
                        swiper.updateClasses();
                        $(swiper.slides).removeClass('is-selected');
                        $(swiper.clickedSlide).addClass('is-selected');
                        galleryTop.slideTo(clicked,300, false);
                    }
                });

                $('#edit-field-time-to-contact-und').chosen({
                    'disable_search': true
                });

                if (!settings.globalFunc.detectMob()) {
                    $('.page-drealty-listing .condo-right-side').height($('.page-drealty-listing .condo-center').height());
                }


                $('.condo-buttons a.buy-now').on('click', function(e) {
                    e.preventDefault();
                    $('.field-name-field-buy-now-button a')[0].click();
                });

                $('.condo-buttons a.book-viewing').on('click', function(e) {
                    e.preventDefault();
                    $('.form-item-field-e-mail-und-0-email input').addClass('alert-form');
                });

                $('.form-item-field-e-mail-und-0-email input').on('click', function() {
                    if ($(this).hasClass('alert-form')) {
                        $(this).removeClass('alert-form');
                    }
                });

            });


        }
    };

    /**
     * Sign up page scripts.
     */
    Drupal.behaviors.signUpPage = {
        attach: function (context, settings) {

            $('#edit-field-looking-to-und').chosen({
                "disable_search": true
            });
        }
    };

    /**
     * Condo page flag fix.
     */
    Drupal.behaviors.condoPage = {
        attach: function (context, settings) {

            $('body').once(function() {
                $('.pane-drealty-listing a.flag').text('Add this listing to my favourites');
            });

        }
    };

    /**
     * Wishlist slider initialize.
     */
    Drupal.behaviors.wishlistSlider = {
        attach: function (context, settings) {

            $('body').once(function() {
                $('.wishlist-slider .view-content').addClass('swiper-wrapper');

                var newlyListedSlider;

                if ($('.wishlist-slider .view-content .views-row').length >= 5) {
                    $('.wishlist-slider').prepend('<div class="wishlist-slider-button-next swiper-button-next"></div><div class="wishlist-slider-button-prev swiper-button-prev"></div>');

                    if ($('.wishlist-slider .view-content .views-row').length > 5) {
                        newlyListedSlider = new Swiper('.wishlist-slider', {
                            slidesPerView: 4,
                            slidesPerColumn: 2,
                            paginationClickable: true,
                            spaceBetween: 25,
                            nextButton: '.wishlist-slider-button-next',
                            prevButton: '.wishlist-slider-button-prev'
                        });
                    }
                    else if ($('.wishlist-slider .view-content .views-row').length <= 5) {
                        newlyListedSlider = new Swiper('.wishlist-slider', {
                            slidesPerView: 4,
                            paginationClickable: true,
                            spaceBetween: 25,
                            nextButton: '.wishlist-slider-button-next',
                            prevButton: '.wishlist-slider-button-prev'
                        });
                    }
                }

                if ($('body').hasClass('page-user-wishlist')) {
                    $('.flag a').on('click', function() {
                        $(this).closest('.views-row').remove();
                        slidesList = $('.wishlist-slider .view-content .views-row');


                        if (slidesList.length == 0) {
                            $('.view-flaged-condos-').children().remove();
                            $('.view-flaged-condos-').append('<div class="view-empty"><p style="font-size: 1.375rem;">' + Drupal.t('<b>YOUR WISH LIST IS CURRENTLY EMPTY,</b> ADD LISTING TO YOUR WISH LIST TO SEE THEM HERE.') + '</p></div>')
                        }

                        if (newlyListedSlider !== undefined) {
                            newlyListedSlider.update();
                        }

                    });
                }

            });
        }
    };

})(jQuery, Drupal);