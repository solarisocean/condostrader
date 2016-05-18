<?php
/**
 * @file
 * ctf_core_image_styles.features.inc
 */

/**
 * Implements hook_image_default_styles().
 */
function ctf_core_image_styles_image_default_styles() {
  $styles = array();

  // Exported image style: 190x120.
  $styles['190x120'] = array(
    'label' => '190x120',
    'effects' => array(
      2 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 190,
          'height' => 120,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 286x160.
  $styles['286x160'] = array(
    'label' => '286x160',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 286,
          'height' => 160,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 333x176.
  $styles['333x176'] = array(
    'label' => '333x176',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 333,
          'height' => 176,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: 365x203.
  $styles['365x203'] = array(
    'label' => '365x203',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 365,
          'height' => 203,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
