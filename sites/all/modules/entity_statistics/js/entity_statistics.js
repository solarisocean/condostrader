/**
 * @file
 * Add entity view statistic.
 */

(function ($) {
  'use strict';
  Drupal.behaviors.entity_statistics = {
    attach: function (context, settings) {
      $('body', context).once('entity-statistics', function () {
        $.ajax({
          type: 'POST',
          cache: false,
          url: Drupal.settings.entity_statistics.url,
          data: Drupal.settings.entity_statistics.data
        });
      });
    }
  };
}(jQuery));
