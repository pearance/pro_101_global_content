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

  $content['prominent_contact'] = (object) array(
    'exported_path' => 'prominent-contact-info',
    'title' => 'Prominent Contact Info',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'block',
    'language' => 'und',
    'created' => '1342252055',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'prominent_contact',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<style type="text/css">
.prominent_contact {text-align:center;  margin:15px 0 0;  padding:0;}
p+p {margin-top:-15px;}</style>
<p class="large special">(888) LAW-DEMO</p>
<p class="small special">Free Case Evaluation</p>
',
          'summary' => '',
          'format' => 'plain_text',
        ),
      ),
    ),
  );

  $content['site_disclamer'] = (object) array(
    'exported_path' => 'site-disclaimer',
    'title' => 'Site Disclaimer',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'block',
    'language' => 'und',
    'created' => '1342251609',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'site_disclamer',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => 'The information and materials on this site are provided for general information purposes and should NOT be relied on as a substitute for actual professional evaluation and advice. Using this site or sending us email does NOT create a professional-client relationship. We make NO warranties regarding the information provided on this site, and disclaim all liability for damages resulting from its use.',
          'summary' => '',
          'format' => 'plain_text',
        ),
      ),
    ),
  );

return $content;
}
