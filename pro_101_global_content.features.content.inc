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

  $content['prominent_contact'] = (object) array(
    'exported_path' => 'block/prominent-contact-info',
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
    'exported_path' => 'block/site-disclaimer',
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
