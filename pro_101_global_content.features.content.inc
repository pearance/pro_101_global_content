<?php
/**
 * @file
 * pro_101_global_content.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function pro_101_global_content_content_defaults() {
  $content = array();

  $content['access_denied'] = (object) array(
    'exported_path' => 'access-denied',
    'title' => 'Access Denied',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'und',
    'created' => '1341652430',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'access_denied',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Access denied message goes here.',
          'summary' => '',
          'format' => 'plain_text',
          'safe_value' => '<p>Access denied message goes here.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

  $content['not_found'] = (object) array(
    'exported_path' => 'page-not-found',
    'title' => 'Page Not Found',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'page',
    'language' => 'und',
    'created' => '1341652096',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'not_found',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'Page not found design goes here.',
          'summary' => '',
          'format' => 'plain_text',
          'safe_value' => '<p>Page not found design goes here.</p>
',
          'safe_summary' => '',
        ),
      ),
    ),
  );

return $content;
}
