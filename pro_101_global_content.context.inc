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
          'region' => 'top_5',
          'weight' => 0,
        ),
        'delta_blocks-logo' => array(
          'module' => 'delta_blocks',
          'delta' => 'logo',
          'region' => 'head_1',
          'weight' => 0,
        ),
        'nodeblock-prominent_contact' => array(
          'module' => 'nodeblock',
          'delta' => 'prominent_contact',
          'region' => 'head_2',
          'weight' => 0,
        ),
        'system-main-menu' => array(
          'module' => 'system',
          'delta' => 'main-menu',
          'region' => 'prime_1',
          'weight' => 0,
        ),
        'delta_blocks-messages' => array(
          'module' => 'delta_blocks',
          'delta' => 'messages',
          'region' => 'pre_1',
          'weight' => 0,
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => 0,
        ),
        'jasm-service_list' => array(
          'module' => 'jasm',
          'delta' => 'service_list',
          'region' => 'main_sidebar_1',
          'weight' => 0,
        ),
        'jasm-fb_like_box' => array(
          'module' => 'jasm',
          'delta' => 'fb_like_box',
          'region' => 'main_sidebar_1',
          'weight' => 1,
        ),
        'jasm-twitter_follow_button' => array(
          'module' => 'jasm',
          'delta' => 'twitter_follow_button',
          'region' => 'main_sidebar_1',
          'weight' => 2,
        ),
        'nodeblock-49' => array(
          'module' => 'nodeblock',
          'delta' => '49',
          'region' => 'main_sidebar_1',
          'weight' => 3,
        ),
        'jasm-feedburner_mail_subscribe' => array(
          'module' => 'jasm',
          'delta' => 'feedburner_mail_subscribe',
          'region' => 'main_sidebar_1',
          'weight' => 4,
        ),
        'views-specialties-block' => array(
          'module' => 'views',
          'delta' => 'specialties-block',
          'region' => 'main_sidebar_1',
          'weight' => 5,
        ),
        'views-testimonals-block' => array(
          'module' => 'views',
          'delta' => 'testimonals-block',
          'region' => 'main_sidebar_1',
          'weight' => 6,
        ),
        'nodeblock-site_disclamer' => array(
          'module' => 'nodeblock',
          'delta' => 'site_disclamer',
          'region' => 'foot_1',
          'weight' => 0,
        ),
        'menu-menu-auxiliary' => array(
          'module' => 'menu',
          'delta' => 'menu-auxiliary',
          'region' => 'bottom_1',
          'weight' => 0,
        ),
        'nodeblock-47' => array(
          'module' => 'nodeblock',
          'delta' => '47',
          'region' => 'bottom_2',
          'weight' => 0,
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
