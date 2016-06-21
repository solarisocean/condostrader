(function ($) {
    Drupal.behaviors.search_api_ranges = {
        attach: function (context, settings) {
            $('body').once(function() {
                $('div.search-api-ranges-widget').each(function () {
                    var slider = $(this).get(0),
                        facet = $(this).parent(),
                        range_all_sliders,
                        startValue;

                    switch (facet.attr('id')) {
                        case 'search-api-ranges-field_lp_dol__torcond':
                            startValue = [Number($(this).attr('min-value')), Number($(this).attr('max-value'))];

                            range_all_sliders = {
                                'min': [Number($(this).attr('min-value')), 10000],
                                '35%': [500000, 50000],
                                '70%': [1000000, 100000],
                                'max': [Number($(this).attr('max-value'))]
                            };
                            break;
                        case 'search-api-ranges-field_sqft_range_max__torcond':
                            startValue = [Number($(this).attr('min-value')), Number($(this).attr('max-value'))];

                            range_all_sliders = {
                                'min': [Number($(this).attr('min-value')), 50],
                                'max': [Number($(this).attr('max-value'))]
                            };
                            break;
                    }

                    noUiSlider.create(slider, {
                        start: startValue,
                        behaviour: 'drag-tap',
                        connect: true,
                        range: range_all_sliders
                    });

                    slider.noUiSlider.on('slide', function () {
                        var form = '#-ctrader-saf-search-button-form',
                            minVal = Math.round(slider.noUiSlider.get()[0]),
                            maxVal = Math.round(slider.noUiSlider.get()[1]);

                        function numberThousand(x) {
                            return x.toString().replace(/\B(?=(\d{3})+(?!\d))/g, ",");
                        }

                        if (facet.attr('id') == 'search-api-ranges-field_lp_dol__torcond') {
                            facet.find('.facet-helper .min').text(numberThousand(minVal));
                            facet.find('.facet-helper .max').text(numberThousand(maxVal));
                            $(form + ' input[name="price_min"]').val(minVal);
                            $(form + ' input[name="price_max"]').val(maxVal);
                        }
                        else if (facet.attr('id') == 'search-api-ranges-field_sqft_range_max__torcond') {
                            facet.find('.facet-helper .min').text(numberThousand(minVal));
                            facet.find('.facet-helper .max').text(numberThousand(maxVal));
                            $(form + ' input[name="size_min"]').val(minVal);
                            $(form + ' input[name="size_max"]').val(maxVal);
                        }
                    });

                });
            });
        }
    };
})(jQuery);
