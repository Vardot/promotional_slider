<?php
/**
 * @file
 * promotional_slider.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function promotional_slider_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_slide_details|node|promtional_slide|teaser';
  $field_group->group_name = 'group_slide_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'promtional_slide';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Slide details',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_link',
      2 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Slide details',
      'instance_settings' => array(
        'classes' => 'promotional-slide-details',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h2',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_slide_details|node|promtional_slide|teaser'] = $field_group;

  return $export;
}
