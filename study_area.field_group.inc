<?php
/**
 * @file
 * study_area.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function study_area_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shared_media|node|study_area|form';
  $field_group->group_name = 'group_shared_media';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study_area';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Insert Media',
    'weight' => '5',
    'children' => array(
      0 => 'field_shared_images',
      1 => 'field_shared_attachments',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Insert Media',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => 'Use these fields to upload images and files that you want to be displayed on this page. To insert an image or attachment, click in the text editor above, then click the <em>Insert</em> button for the image or attachment you want to insert.',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_shared_media|node|study_area|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_shared_structure|node|study_area|form';
  $field_group->group_name = 'group_shared_structure';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'study_area';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Structure',
    'weight' => '9',
    'children' => array(
      0 => 'field_shared_tags',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Structure',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_shared_structure|node|study_area|form'] = $field_group;

  return $export;
}
