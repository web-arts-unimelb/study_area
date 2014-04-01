<?php
/**
 * @file
 * study_area.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function study_area_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function study_area_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function study_area_node_info() {
  $items = array(
    'study_area' => array(
      'name' => t('Study Area'),
      'base' => 'node_content',
      'description' => t('A <em>Study Area</em> contains study area details as well as information on how to retrieve extra data from the data warehouse using SparQL queries.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
