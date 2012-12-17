<?php
/**
 * @file
 * pro_101_global_content.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pro_101_global_content_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global';
  $context->description = '';
  $context->tag = 'Section';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'top_1',
          'weight' => '-10',
        ),
        'delta_blocks-logo' => array(
          'module' => 'delta_blocks',
          'delta' => 'logo',
          'region' => 'head_1',
          'weight' => '0',
        ),
        'nodeblock-call_to_action' => array(
          'module' => 'nodeblock',
          'delta' => 'call_to_action',
          'region' => 'head_2',
          'weight' => '0',
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'prime_1',
          'weight' => '0',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '1',
        ),
        'jasm-feedburner_mail_subscribe' => array(
          'module' => 'jasm',
          'delta' => 'feedburner_mail_subscribe',
          'region' => 'main_sidebar_1',
          'weight' => '0',
        ),
        'views-specialties-block' => array(
          'module' => 'views',
          'delta' => 'specialties-block',
          'region' => 'main_sidebar_1',
          'weight' => '1',
        ),
        'views-testimonals-block' => array(
          'module' => 'views',
          'delta' => 'testimonals-block',
          'region' => 'main_sidebar_1',
          'weight' => '2',
        ),
        'nodeblock-site_disclamer' => array(
          'module' => 'nodeblock',
          'delta' => 'site_disclamer',
          'region' => 'foot_1',
          'weight' => '0',
        ),
        'menu-menu-auxiliary' => array(
          'module' => 'menu',
          'delta' => 'menu-auxiliary',
          'region' => 'bottom_1',
          'weight' => '0',
        ),
        'nodeblock-47' => array(
          'module' => 'nodeblock',
          'delta' => '47',
          'region' => 'bottom_2',
          'weight' => '0',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Section');
  $export['global'] = $context;

  return $export;
}
