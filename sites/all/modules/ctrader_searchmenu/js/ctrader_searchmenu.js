(function ($) {
    Drupal.behaviors.searchMenu = {
        attach: function (context, settings) {
            // console.log('buuu');
            // $('#searchmenu_form_input').autocomplete({
            //     source: '/index.php?q=search_api_autocomplete/search_api_views_search_results_ctrader/search_api_aggregation_1/'
            // });
            // $('#searchmenu_form_input').on('input',function(e){
            //     // console.log($(this).val());
            //     $.ajax({
            //         type: 'POST',
            //         url: '/index.php?q=search_api_autocomplete/search_api_views_search_results_ctrader/search_api_aggregation_1/' + $(this).val(),
            //         success: function(data){
            //             console.log(data);
            //         }
            //     });
            // });
        }
    };
})(jQuery);
