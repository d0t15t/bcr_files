<?php
/**
 * @file
 * bcr_banner.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bcr_banner_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_flag_default_flags().
 */
function bcr_banner_flag_default_flags() {
  $flags = array();
  // Exported flag: "Banner include flag".
  $flags['banner_include_flag'] = array(
    'content_type' => 'node',
    'title' => 'Banner include flag',
    'global' => 1,
    'types' => array(
      0 => 'blog',
    ),
    'flag_short' => 'Include a banner in this article',
    'flag_long' => '',
    'flag_message' => '',
    'unflag_short' => 'No banner in this article',
    'unflag_long' => '',
    'unflag_message' => '',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'roles' => array(
      'flag' => array(
        0 => 2,
        1 => 4,
        2 => 5,
      ),
      'unflag' => array(
        0 => 2,
        1 => 4,
        2 => 5,
      ),
    ),
    'weight' => 0,
    'show_on_form' => 1,
    'access_author' => '',
    'show_on_page' => 1,
    'show_on_teaser' => 1,
    'show_contextual_link' => 0,
    'i18n' => 0,
    'api_version' => 2,
    'module' => 'bcr_banner',
    'locked' => array(
      0 => 'name',
    ),
  );
  return $flags;

}

/**
 * Implements hook_node_info().
 */
function bcr_banner_node_info() {
  $items = array(
    'banner' => array(
      'name' => t('Banner'),
      'base' => 'node_content',
      'description' => t('Banners inside blog articles'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
