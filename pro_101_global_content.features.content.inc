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

  $content['call-to-action'] = (object) array(
    'exported_path' => 'block/call-to-action',
    'title' => 'Call to Action',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'block',
    'language' => 'und',
    'created' => '1357269168',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'call-to-action',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<div>
	<a class="action-number" href="tel:888-888-8888"><div><i class="icon-phone-sign">&nbsp;</i>888-PRO-START</div></a>
</div>

<p class="action-caption">
	Free Case Evaluation
</p>
',
          'summary' => '',
          'format' => 'plain_text',
        ),
      ),
    ),
  );

  $content['copyright'] = (object) array(
    'exported_path' => 'block/copyright',
    'title' => 'Copyright',
    'status' => '1',
    'promote' => '0',
    'sticky' => '0',
    'type' => 'block',
    'language' => 'und',
    'created' => '1357995864',
    'comment' => '0',
    'translate' => '0',
    'machine_name' => 'copyright',
    'body' => array(
      'und' => array(
        0 => array(
          'value' => '<p>
	© 2012 Pro Starter. All rights reserved. | &nbsp;<a href="/user/login">Log In</a>
</p>
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
          'value' => '<p>
	The information and materials on this site are provided for general information purposes and should NOT be relied on as a substitute for actual professional evaluation and advice. Using this site or sending us email does NOT create a professional-client relationship. We make NO warranties regarding the information provided on this site, and disclaim all liability for damages resulting from its use.
</p>
',
          'summary' => '',
          'format' => 'plain_text',
        ),
      ),
    ),
  );

return $content;
}
