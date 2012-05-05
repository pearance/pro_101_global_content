<?php
/**
 * @file
 * pro_101_global_content.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function pro_101_global_content_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-auxiliary
  $menus['menu-auxiliary'] = array(
    'menu_name' => 'menu-auxiliary',
    'title' => 'Auxiliary',
    'description' => 'The <em>Auxiliary</em> menu contains global secondary links that are usually located in the footer region of a site.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Auxiliary');
  t('The <em>Auxiliary</em> menu contains global secondary links that are usually located in the footer region of a site.');


  return $menus;
}
