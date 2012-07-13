<?php
/**
 * @file
 * pro_101_global_content.box.inc
 */

/**
 * Implements hook_default_box().
 */
function pro_101_global_content_default_box() {
  $export = array();

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'prominent_contact';
  $box->plugin_key = 'simple';
  $box->title = '';
  $box->description = 'Prominent Contact Info';
  $box->options = array(
    'body' => array(
      'value' => '<style>
.prominent_contact {text-align:center;  margin:15px 0 0;  padding:0;}
p+p {margin-top:-15px;}
</style>

<p class="large special">(888) LAW-DEMO</p>
<p class="small special">Free Case Evaluation</p>',
      'format' => 'plain_text',
    ),
    'additional_classes' => 'prominent_contact',
  );
  $export['prominent_contact'] = $box;

  $box = new stdClass();
  $box->disabled = FALSE; /* Edit this to true to make a default box disabled initially */
  $box->api_version = 1;
  $box->delta = 'site_disclaimer';
  $box->plugin_key = 'simple';
  $box->title = 'Site Disclaimer';
  $box->description = 'Site Disclaimer';
  $box->options = array(
    'body' => array(
      'value' => '<p>The information and materials on this site are provided for general information purposes and should NOT be relied on as a substitute for actual professional evaluation and advice.&nbsp;Using this site or sending us email does NOT create a professional-client relationship. We make NO warranties regarding the information provided on this site, and disclaim all liability for damages resulting from its use.</p>
',
      'format' => 'plain_text',
    ),
    'additional_classes' => '',
  );
  $export['site_disclaimer'] = $box;

  return $export;
}
