<?php
/**
 * @file
 * Lazyloader Admin
 *
 * @author: Daniel Honrade http://drupal.org/user/351112
 *
 */

/**
 * Admin Form: General settings
 *
 */
function lazyloader_admin_configure() {
  $form = array();

  $form['lazyloader_enabled'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enabled'),
    '#default_value' => variable_get('lazyloader_enabled', LAZYLOADER_ENABLED),
    '#description' => t('Enable/Disable Lazyloader (Useful for testing)'),
  );

  $form['lazyloader_debugging'] = array(
    '#type' => 'checkbox',
    '#title' => t('Use development javascript'),
    '#default_value' => variable_get('lazyloader_development', LAZYLOADER_DEBUGGING),
    '#description' => t('By default lazyloader will use the minified version of the echo library. By checking this option it will use the non-minified version instead.'),
  );

  $form['lazyloader_distance'] = array(
    '#type' => 'textfield',
    '#title' => t('Distance'),
    '#default_value' => variable_get('lazyloader_distance', LAZYLOADER_DISTANCE),
    '#size' => 5,
    '#maxlength' => 5,
    '#description' => t('The distance option allows you to specify when Lazyloader should start loading your images. If you specify 0, Lazyloader will load your image as soon as it is visible in the viewport, if you want to load 1000px below or above the viewport, use 1000.'),
  );

  $form['lazyloader_load_image_delay'] = array(
    '#type' => 'textfield',
    '#title' => t('Load Image Delay'),
    '#default_value' => variable_get('lazyloader_load_image_delay', LAZYLOADER_LOAD_IMAGE_DELAY),
    '#size' => 5,
    '#maxlength' => 5,
    '#description' => t('The delay option allows you to specify a delay (in miliseconds) between the scroll event and when lazyloader will start loading the images.'),
  );

  $form['lazyloader_debounce'] = array(
    '#type' => 'checkbox',
    '#title' => t('Debounce'),
    '#default_value' => variable_get('lazyloader_debounce', LAZYLOADER_DEBOUNCE),
    '#description' => 'The debounce option prevents images from being loaded while the user is still scrolling. If you want to use the traditional delay, unselect this option.',
  );

  $form['lazyloader_unload'] = array(
    '#type' => 'checkbox',
    '#title' => t('Unload'),
    '#default_value' => variable_get('lazyloader_unload', LAZYLOADER_UNLOAD),
    '#description' => 'Checking unload option will make Lazyloader unload the images when they are no longer within the viewport (including the offset area).',
  );

  $form['lazyloader_placeholder'] = array(
    '#type' => 'textfield',
    '#title' => t('Placeholder Image'),
    '#default_value' => variable_get('lazyloader_placeholder', LAZYLOADER_PLACEHOLDER),
    '#description' => t('Path to your placeholder image, ex. sites/default/files/placeholder_image.gif. Leave it blank to use the default image.'),
  );

  $loader_dir = base_path() . drupal_get_path('module', 'lazyloader') . '/loader/';
  $loader = array(0 => t('None'));
  for ($i = 1; $i <= 8; $i++) {
    $loader[$i] = '<img alt="Lazyloader Icon" src="' . $loader_dir . 'loader-' . $i . '.gif" />';
  }
  $loader[9] = t('Custom icon');

  $form['lazyloader_icon'] = array(
    '#type' => 'radios',
    '#title' => t('Loader Icon'),
    '#options' => $loader,
    '#default_value' => variable_get('lazyloader_icon', LAZYLOADER_ICON),
    '#description' => t('This icon will show when the actual image is not yet fully loaded.'),
  );

  $form['lazyloader_custom_icon_path'] = array(
    '#type' => 'textfield',
    '#title' => t('Custom Loader Icon'),
    '#default_value' => variable_get('lazyloader_custom_icon_path', LAZYLOADER_CUSTOM_ICON_PATH),
    '#description' => t('Relative path to the custom loading icon you wish to use, ex. <em>profiles/MYPROFILE/custom_loader_icon.gif</em>.'),
    '#states' => array(
      'visible' => array(
        ':input[name="lazyloader_icon"]' => array('value' => 9),
      ),
    ),
  );

  $form['actions']['reset'] = array(
    '#type' => 'submit',
    '#value' => t('Reset'),
    '#weight' => 10
  );
  $form['#submit'][] = 'lazyloader_admin_configure_submit';

  return system_settings_form($form);
}

/**
 * Submit handler for the lazyloader settings form.
 */
function lazyloader_admin_configure_submit($form, &$form_state) {
  if ($form_state['values']['op'] == t('Reset')) {
    // Reset form values.
    $form_state['values']['lazyloader_enable'] = LAZYLOADER_ENABLED;
    $form_state['values']['lazyloader_distance'] = LAZYLOADER_DISTANCE;
    $form_state['values']['lazyloader_icon'] = LAZYLOADER_ICON;
    $form_state['values']['lazyloader_custom_icon_path'] = LAZYLOADER_CUSTOM_ICON_PATH;
    $form_state['values']['lazyloader_placeholder'] = LAZYLOADER_PLACEHOLDER;
    $form_state['values']['lazyloader_unload'] = LAZYLOADER_UNLOAD;
    $form_state['values']['lazyloader_debounce'] = LAZYLOADER_DEBOUNCE;
    $form_state['values']['lazyloader_development'] = LAZYLOADER_DEBUGGING;
  }

  // Rebuild the theme registry if the module was enabled/disabled.
  if ($form['lazyloader_enabled']['#default_value'] !== $form_state['values']['lazyloader_enabled']) {
    drupal_theme_rebuild();
  }
}

/**
 * Admin form: Exclude options.
 *
 */
function lazyloader_admin_exclude() {
  $form = array();

  $form['lazyloader_page_exclude_option'] = array(
    '#type' => 'radios',
    '#title' => t('Enable on specific pages'),
    '#default_value' => variable_get('lazyloader_page_exclude_option', LAZYLOADER_PAGE_EXCLUDE_OPTION),
    '#options' => array(
      'exclude' => t('All pages except those listed'),
      'include' => t('Only the listed pages'),
    ),
  );

  $form['lazyloader_paths'] = array(
    '#type' => 'textarea',
    '#title_display' => 'invisible',
    '#title' => t('Pages'),
    '#default_value' => variable_get('lazyloader_paths', LAZYLOADER_PATHS),
    '#description' => t("Specify pages by using their paths. Enter one path per line. The '*' character is a wildcard. i.e. <em>blog/*</em> or node/1"),
  );

  $options = array();
  $types = node_type_get_types();
  foreach ($types as $type) {
    $options[$type->type] = $type->name;
  }

  $form['lazyloader_content_types'] = array(
    '#type' => 'checkboxes',
    '#options' => $options,
    '#title' => t('Enabled on content types'),
    '#default_value' => variable_get('lazyloader_content_types', array()),
    '#description' => t('Enable Lazyloader on the selected content types only. If no content types are selected Lazyloader is enabled for all content types.'),
  );

  $options = array();
  $styles = image_styles();
  foreach ($styles as $style) {
    $options[$style['name']] = $style['name'];
  }

  $form['lazyloader_image_styles'] = array(
    '#type' => 'checkboxes',
    '#options' => $options,
    '#title' => t('Enabled for image styles'),
    '#default_value' => variable_get('lazyloader_image_styles', array()),
    '#description' => t('Enable Lazyloader for the selected image styles only. If no image styles are selected Lazyloader is enabled for all image styles.'),
  );

  $form['lazyloader_excluded_filenames'] = array(
    '#type' => 'textarea',
    '#title' => t('Exclude images by filename'),
    '#default_value' => variable_get('lazyloader_excluded_filenames', LAZYLOADER_EXCLUDED_FILENAMES),
    '#description' => t('Any filenames entered in this field will be excluded from lazyloading. Enter one filename per line.'),
  );

  $form['actions']['reset'] = array(
    '#type' => 'submit',
    '#value' => t('Reset'),
    '#weight' => 10
  );
  $form['#submit'][] = 'lazyloader_admin_exclude_submit';

  return system_settings_form($form);
}

/**
 * Submit handler for the lazyloader settings form.
 */
function lazyloader_admin_exclude_submit($form, &$form_state) {
  if ($form_state['values']['op'] == t('Reset')) {
    // Reset form values.
    $form_state['values']['lazyloader_paths'] = LAZYLOADER_PATHS;
    $form_state['values']['lazyloader_page_exclude_option'] = LAZYLOADER_PAGE_EXCLUDE_OPTION;
    $form_state['values']['lazyloader_excluded_filenames'] = LAZYLOADER_EXCLUDED_FILENAMES;
  }
}
