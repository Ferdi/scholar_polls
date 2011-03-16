<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _scholar_polls_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'scholar',
    'attribute' => 'feature',
    'value' => 'polls',
    'description' => 'Polls feature context',
    'node' => array(
      '0' => 'poll',
    ),
    'views' => array(
      '0' => 'scholar_polls',
    ),
    'menu' => 'polls',
    'block' => array(
      'vsite_taxonomy_0' => array(
        'module' => 'vsite_taxonomy',
        'delta' => '0',
        'weight' => 41,
        'region' => 'right',
        'status' => '0',
        'label' => 'Categories - Filter categorized content',
        'type' => 'context_ui',
      ),
      'vsite_widgets_2' => array(
        'module' => 'vsite_widgets',
        'delta' => '2',
        'weight' => 42,
        'region' => 'right',
        'status' => '0',
        'label' => 'ShareThis Button - Allows you to share posts using popular online services',
        'type' => 'context_ui',
      ),
    ),
  );
  return $items;
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _scholar_polls_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Polls',
    'path' => 'polls',
    'weight' => '0',
    'description' => 'List of polls in my site',
  );
  // Translatables
  array(
    t('List of polls in my site'),
    t('Polls'),
  );


  return $items;
}
