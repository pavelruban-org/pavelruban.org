<?php
/**
 * @file
 * common_content_type_page.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function common_content_type_page_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_blocks|node|page|form';
  $field_group->group_name = 'group_blocks';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Blocs',
    'weight' => '5',
    'children' => array(
      0 => 'field_blocks_zone1',
      1 => 'field_blocks_zone2',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Blocs',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_blocks|node|page|form'] = $field_group;

  return $export;
}
