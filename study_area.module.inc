<?php
/**
 *
 */

/**
 * Implements hook_element_info_alter().
 */
function study_area_element_info_alter(&$type) {
  $type['link_field']['#process'][] = '_study_area_link_field_process';
}

/**
 * Process callback.
 *
 * Modify element titles on the building link field in the staff node type.
 */
function _study_area_link_field_process($element, $form_state, $complete_form) {
  if ($element['#field_name'] == 'field_fae_resource') {
    $element['title']['#title'] = t('Resource label');
    $element['title']['#description'] = t('Enter the resource label or name.');
    $element['url']['#title'] = t('Resource URI');
    $element['url']['#description'] = t('Enter the resource URL.');
  }
  return $element;
}
