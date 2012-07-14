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
    'path' => array(
      'values' => array(
        '*' => '*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '0',
        ),
        'delta_blocks-logo' => array(
          'module' => 'delta_blocks',
          'delta' => 'logo',
          'region' => 'user_first',
          'weight' => '0',
        ),
        'system-user-menu' => array(
          'module' => 'system',
          'delta' => 'user-menu',
          'region' => 'user_second',
          'weight' => '0',
        ),
        'nodeblock-prominent_contact' => array(
          'module' => 'nodeblock',
          'delta' => 'prominent_contact',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'jasm-service_list' => array(
          'module' => 'jasm',
          'delta' => 'service_list',
          'region' => 'sidebar_second',
          'weight' => '1',
        ),
        'jasm-feedburner_mail_subscribe' => array(
          'module' => 'jasm',
          'delta' => 'feedburner_mail_subscribe',
          'region' => 'sidebar_second',
          'weight' => '2',
        ),
        'jasm-fb_like_box' => array(
          'module' => 'jasm',
          'delta' => 'fb_like_box',
          'region' => 'sidebar_second',
          'weight' => '3',
        ),
        'jasm-twitter_profile_widget' => array(
          'module' => 'jasm',
          'delta' => 'twitter_profile_widget',
          'region' => 'sidebar_second',
          'weight' => '4',
        ),
        'jasm-twitter_follow_button' => array(
          'module' => 'jasm',
          'delta' => 'twitter_follow_button',
          'region' => 'sidebar_second',
          'weight' => '5',
        ),
        'views-specialties-block' => array(
          'module' => 'views',
          'delta' => 'specialties-block',
          'region' => 'sidebar_second',
          'weight' => '6',
        ),
        'views-testimonals-block' => array(
          'module' => 'views',
          'delta' => 'testimonals-block',
          'region' => 'sidebar_second',
          'weight' => '7',
        ),
        'nodeblock-site_disclamer' => array(
          'module' => 'nodeblock',
          'delta' => 'site_disclamer',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'menu-menu-auxiliary' => array(
          'module' => 'menu',
          'delta' => 'menu-auxiliary',
          'region' => 'footer_second',
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
