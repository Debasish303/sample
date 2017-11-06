<?php
/**
 * @file
 * customview.features.inc
 */

/**
 * Implements hook_views_api().
 */
function customview_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function customview_node_info() {
  $items = array(
    'faq' => array(
      'name' => t('Faq'),
      'base' => 'node_content',
      'description' => t('Add questions and answers to Faq.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
