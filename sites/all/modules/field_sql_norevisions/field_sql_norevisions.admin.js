/**
 * @file
 * Some enhancements in administration for the
 * Field SQL norevisions module.
 */

(function ($) {
  var selectText = Drupal.t('Select all bundles'),
      unselectText = Drupal.t('Deselect all bundles');

  Drupal.behaviors.FieldSQLnorevisionsAdmin = {
    attach: function (context, settings) {
      $('.field-sql-norevisions-admin-form', context)
        .once('field-sql-norevisions-admin-form')
        .find('fieldset').each(function () {

        var fieldset = $(this),
            checkboxes = fieldset.find('.form-checkbox'),
            defaultText = (checkboxes.filter(':checked').length != checkboxes.length) ? selectText : unselectText,
            link = $('<a href="#">')
                    .addClass('select-all')
                    .text(defaultText)
                    .insertAfter(fieldset.find('.fieldset-title'));

        link.wrap('<div class="select-all-wrapper">')
        .before(' (')
        .after(')')
        .click(function (e) {
          e.preventDefault();

          var check = link.text() === selectText;
          checkboxes.attr('checked', check);
          link.text(check ? unselectText : selectText);
        });

        checkboxes.change(function () {
          if (!checkboxes.filter(':not(:checked)').length) {
            link.text(unselectText);
          }
          else if (link.text() === unselectText) {
            link.text(selectText);
          }
        });
      });
    }
  };
})(jQuery);
