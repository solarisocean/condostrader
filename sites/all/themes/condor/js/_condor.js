/* Implement custom javascript here */
(function ($, Drupal) {
    Drupal.behaviors.searchButton = {
        attach: function (context, settings) {
            $('#search-button').on('click', function (e) {
                e.preventDefault();
                $('#searchmenu-form').toggleClass('search-visible');
            });
        }
    };
})(jQuery, Drupal);