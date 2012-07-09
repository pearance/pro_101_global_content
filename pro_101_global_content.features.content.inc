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
          'value' => '<span style="color: rgb(80, 80, 80); font-family: Arial, Helvetica, sans-serif; line-height: 19px; ">It seems like the page you were looking for is not available, or the URL you linked from is not valid. May we suggest other ways to find the information you are looking for?</span>',
          'summary' => '',
          'format' => 'plain_text',
        ),
      ),
    ),
  );

return $content;
}
