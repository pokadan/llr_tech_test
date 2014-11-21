<?php
/**
 * @file
 * expose_simple_rest_service.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function expose_simple_rest_service_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'simple_listing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Simple listing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    4 => '4',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_imagef']['id'] = 'field_imagef';
  $handler->display->display_options['fields']['field_imagef']['table'] = 'field_data_field_imagef';
  $handler->display->display_options['fields']['field_imagef']['field'] = 'field_imagef';
  $handler->display->display_options['fields']['field_imagef']['label'] = '';
  $handler->display->display_options['fields']['field_imagef']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagef']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagef']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'simple' => 'simple',
  );

  /* Display: Services */
  $handler = $view->new_display('services', 'Services', 'services_1');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_description']['id'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['table'] = 'field_data_field_description';
  $handler->display->display_options['fields']['field_description']['field'] = 'field_description';
  $handler->display->display_options['fields']['field_description']['label'] = '';
  $handler->display->display_options['fields']['field_description']['element_label_colon'] = FALSE;
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_imagef']['id'] = 'field_imagef';
  $handler->display->display_options['fields']['field_imagef']['table'] = 'field_data_field_imagef';
  $handler->display->display_options['fields']['field_imagef']['field'] = 'field_imagef';
  $handler->display->display_options['fields']['field_imagef']['label'] = '';
  $handler->display->display_options['fields']['field_imagef']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_imagef']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_imagef']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_imagef']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['path'] = 'simple_listing';
  $export['simple_listing'] = $view;

  return $export;
}
