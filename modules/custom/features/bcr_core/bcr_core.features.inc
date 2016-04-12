<?php
/**
 * @file
 * bcr_core.features.inc
 */

/**
 * Implements hook_views_api().
 */
function bcr_core_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function bcr_core_image_default_styles() {
  $styles = array();

  // Exported image style: channel_block.
  $styles['channel_block'] = array(
    'label' => 'channel block',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 250,
          'height' => 180,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: channel_block_auto_overlay.
  $styles['channel_block_auto_overlay'] = array(
    'label' => 'channel block with auto overlay',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 250,
          'height' => 180,
        ),
        'weight' => 1,
      ),
      5 => array(
        'name' => 'image_desaturate',
        'data' => array(),
        'weight' => 2,
      ),
      6 => array(
        'name' => 'coloractions_brightness',
        'data' => array(
          'filter_arg1' => -30,
        ),
        'weight' => 3,
      ),
    ),
  );

  // Exported image style: extra_large.
  $styles['extra_large'] = array(
    'label' => 'extra large',
    'effects' => array(
      8 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => '',
          'upscale' => 1,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
