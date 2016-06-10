(function ($) {
    Drupal.behaviors.searchMenu = {
        attach: function (context, settings) {
            //
            // $('#searchmenu_form_input').on('input',function(e){
            //
            //     console.log($('.custom-autocomplete').length);
            //     if ($('.custom-autocomplete').length === 0) {
            //         $(this).parent().append('<ul class="custom-autocomplete"></ul>');
            //     }
            //
            //     var _this = $(this);
            //
            //     $.ajax({
            //         type: 'POST',
            //         url: '/index.php?q=search_api_autocomplete/search_api_views_search_results_ctrader/search_api_aggregation_1/' + $(this).val(),
            //         success: function(data){
            //             // console.log(data);
            //             $('.custom-autocomplete li').remove();
            //             for (var x in data) {
            //                 // console.log(x);
            //                 $('.custom-autocomplete').append('<li class="custom-autocomplete-result"></li>');
            //                 $('.custom-autocomplete-result').html(data[x]);
            //                 // console.log(data[x]);
            //             }
            //         }
            //     });
            // });

        }
    };
})(jQuery);
