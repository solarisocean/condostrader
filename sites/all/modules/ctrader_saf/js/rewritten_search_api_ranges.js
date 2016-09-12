(function ($) {
    Drupal.behaviors.search_api_ranges = {
        attach: function (context, settings) {
            setTimeout(function(){
                $('body').once(function() {
                    $('div.search-api-ranges-widget').each(function () {
                        var slider = $(this).get(0),
                            facet = $(this).parent(),
                            range_all_sliders,
                            startValue,
                            sale = $('.facetapi-facet-field-s-r--torcond .facetapi-active.active-region-facet').parent().hasClass('first'),
                            form = '#-ctrader-saf-search-button-form',
                            priceMin = $(form + ' input[name="price_min"]'),
                            priceMax = $(form + ' input[name="price_max"]'),
                            sizeMin = $(form + ' input[name="size_min"]'),
                            sizeMax = $(form + ' input[name="size_max"]');
                        //Function to divide number in thousand.
                        var numberThousand = function (x) {
                            return x.toString().replace(/\B(?=(\d{3})+(?!\d))/g, ",");
                        };

                        //Function for update values on slider change.
                        var _updateValues = function(min, max, onSlide) {
                            if (facet.attr('id') == 'search-api-ranges-field_lp_dol__torcond') {
                                facet.find('.facet-helper .min').text(numberThousand(min));
                                facet.find('.facet-helper .max').text(numberThousand(max));
                                if (arguments[2] == true) {
                                    priceMin.val(min);
                                    priceMax.val(max);
                                }
                            }
                            else if (facet.attr('id') == 'search-api-ranges-field_sqft_range_max__torcond') {
                                facet.find('.facet-helper .min').text(numberThousand(min));
                                facet.find('.facet-helper .max').text(numberThousand(max));
                                if (arguments[2] == true) {
                                    sizeMin.val(min);
                                    sizeMax.val(max);
                                }
                            }
                        };

                        if (sale) {
                            if (facet.attr('id') == 'search-api-ranges-field_lp_dol__torcond') {
                                startValue = [Number($(this).attr('min-value')), Number($(this).attr('max-value'))];

                                range_all_sliders = {
                                    'min': [Number($(this).attr('min-value')), 10000],
                                    '35%': [500000, 50000],
                                    '70%': [1000000, 100000],
                                    'max': [Number($(this).attr('max-value'))]
                                };
                            }

                        }
                        else {
                            if (facet.attr('id') == 'search-api-ranges-field_lp_dol__torcond') {
                                $('#search-api-ranges-field_lp_dol__torcond span.max').text("10000");
                                startValue = [Number($(this).attr('min-value')), 10000];

                                range_all_sliders = {
                                    'min': [Number($(this).attr('min-value')), 100],
                                    '35%': [3000, 500],
                                    //'70%': [1000000, 100000],
                                    'max': [10000]
                                };
                            }
                        }
                        if (facet.attr('id') == 'search-api-ranges-field_sqft_range_max__torcond') {
                            startValue = [Number($(this).attr('min-value')), Number($(this).attr('max-value'))];

                            range_all_sliders = {
                                'min': [Number($(this).attr('min-value')), 50],
                                'max': [Number($(this).attr('max-value'))]
                            };
                        }

                        //Initialize sliders.
                        noUiSlider.create(slider, {
                            start: startValue,
                            behaviour: 'drag-tap',
                            connect: true,
                            range: range_all_sliders
                        });

                        //Set sliders positions when value not 0.
                        if (priceMin.val() != '' && priceMax.val() != '') {
                            if (slider.parentElement.id == 'search-api-ranges-field_lp_dol__torcond') {
                                slider.noUiSlider.set([priceMin.val(), priceMax.val()]);
                                $(slider).parent().find('.facet-helper .min').text(numberThousand(priceMin.val()));
                                $(slider).parent().find('.facet-helper .max').text(numberThousand(priceMax.val()));
                            }
                        }

                        if (sizeMin.val() != '' && sizeMax.val() != '') {
                            if (slider.parentElement.id == 'search-api-ranges-field_sqft_range_max__torcond') {
                                slider.noUiSlider.set([sizeMin.val(), sizeMax.val()]);
                                $(slider).parent().find('.facet-helper .min').text(numberThousand(sizeMin.val()));
                                $(slider).parent().find('.facet-helper .max').text(numberThousand(sizeMax.val()));
                            }
                        }

                        //Update values on sliders change.
                        slider.noUiSlider.on('slide', function () {
                            minVal = Math.round(slider.noUiSlider.get()[0]),
                                maxVal = Math.round(slider.noUiSlider.get()[1]);

                            _updateValues(minVal, maxVal, true);
                        });
                    });
                });
            },1);
        }
    };
})(jQuery);
