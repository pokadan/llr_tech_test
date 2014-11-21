<?php
/**
 * @file
 * expose_simple_rest_service.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function expose_simple_rest_service_user_default_roles() {
  $roles = array();

  // Exported role: consume services.
  $roles['consume services'] = array(
    'name' => 'consume services',
    'weight' => 3,
  );

  return $roles;
}
