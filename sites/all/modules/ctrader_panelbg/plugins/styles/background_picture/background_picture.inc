<?php
/**
 * Created by PhpStorm.
 * User: morzi
 * Date: 05.05.2016
 * Time: 13:44
 */

// Plugin definition
$plugin = array(
  // Title and description of the plugin
  'title' => t('Background picture'),
  'description' => t('Background picture style.'),
  // Define a theme function for this plugin
  'render region' => 'background_picture_style_render_region',
  // We'll be using a template for rendering
  'hook theme' => array(
    'background_picture_style' => array(
      'variables' => array(
        'content' => NULL,
        'style_attributes' => array(),
      ),
      'path' => drupal_get_path('module', 'ctrader_panelbg') . '/plugins/styles/background_picture',
      'template' => 'background-picture',
    ),
  ),
  // This defines the settings form for the plugin
  'settings form' => 'background_picture_style_settings_form',
);

/**
 * Settings form callback.
 */
function background_picture_style_settings_form($form, $form_state) {
  $form['image'] = array(
    '#type' => 'textfield',
    '#title' => t('Image field'),
    '#description' => t('Enter the image field for the background image. You may use substitutions in this field. E.g. for the default image field attached to articles use "%node:field_image"'),
    '#required' => TRUE,
    '#default_value' => (isset($form['image'])) ? $form['image'] : '',
  );
  $form['image_style'] = array(
    '#type' => 'select',
    '#title' => t('Image Style'),
    '#description' => t('Choose the appropriate image style for the background image.'),
    '#options' => image_style_options(),
    '#default_value' => (isset($form['image_style'])) ? $form['image_style'] : '',
  );
  $form['class'] = array(
    '#type' => 'textfield',
    '#title' => t('CSS Classes'),
    '#description' => t('Enter CSS classes for this style. Separate multiple classes by spaces.'),
    '#default_value' => (isset($form['class'])) ? $form['class'] : '',
  );

  return $form;
}

/**
 * Render callback.
 */
function theme_background_picture_style_render_region($vars) {
  $image_url = NULL;

  // Get the absolute path of the original image from the context substitution
  $image_abs_path = ctools_context_keyword_substitute($vars['settings']['image'], array(), $vars['display']->context);

  $image_style = $vars['settings']['image_style'];

  if ($image_style == '') {
    // If no image style is selected, use the original image.
    $image_url = $image_abs_path;
  } else {
    // Image style is provided in the settings form.
    // We need to get the original image uri to return the URL for an image derivative.
    global $base_url;
    $files_rel_path = variable_get('file_public_path', conf_path() . '/files');
    $image_rel_path = str_replace($base_url . '/' . $files_rel_path, '', $image_abs_path);
    $image_uri = file_build_uri($image_rel_path);

    $image_style_url = image_style_url($image_style, $image_uri);

    $image_url = $image_style_url;
  }

  $style_attributes = array();
  $style_attributes['style'] = 'background-image: url(' . $image_url . ');';

  // Add our classes to the attrubutes array, if any defined
  if ($vars['settings']['class']) {
    $style_attributes['class'] = explode(' ', $vars['settings']['class']);
  }

  $content = implode($vars['panes']);

  return theme('background_picture_style', array(
      'content' => $content,
      'style_attributes' => $style_attributes,
    )
  );
}