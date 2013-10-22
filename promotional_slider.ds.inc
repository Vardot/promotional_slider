<?php
/**
 * @file
 * promotional_slider.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function promotional_slider_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|promtional_slide|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'promtional_slide';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|promtional_slide|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function promotional_slider_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|promtional_slide|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'promtional_slide';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'field_image',
        1 => 'group_slide_details',
        2 => 'title',
        3 => 'body',
        4 => 'field_link',
      ),
    ),
    'fields' => array(
      'field_image' => 'central',
      'group_slide_details' => 'central',
      'title' => 'central',
      'body' => 'central',
      'field_link' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|promtional_slide|teaser'] = $ds_layout;

  return $export;
}
