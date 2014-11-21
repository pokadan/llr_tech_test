<?php
/**
 * @file
 * expose_simple_rest_service.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function expose_simple_rest_service_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "services" && $api == "services") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function expose_simple_rest_service_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function expose_simple_rest_service_node_info() {
  $items = array(
    'simple' => array(
      'name' => t('Simple content'),
      'base' => 'node_content',
      'description' => t('Simple content type to be transferred between two test sites.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
