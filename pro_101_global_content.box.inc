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

  return $export;
}
