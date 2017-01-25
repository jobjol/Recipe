<?php

/**
 * @file
 * Defines forms for the recipe module.
 */


/**
 * Implements hook_form().
 *
*/
function recipe_add_form($form, &$form_state) {
  $form['title'] = array(
    '#title' => t('Title'),
    '#type' => 'textfield',
    '#description' => t('Please enter the title.'),
  );
  $form['author'] = array(
    '#title' => t('Your name'),
    '#type' => 'textfield',
    '#description' => t('Please enter your name.'),
  );
  $form['email'] = array(
    '#title' => t('Email address'),
    '#type' => 'textfield',
    '#description' => t('Please enter your email address.'),
  );
  $form['description'] = array(
    '#title' => t('Description'),
    '#type' => 'textarea',
    '#description' => t('Description of the recipe. Maximum 500 characters'),
  );
  $form['instructions'] = array(
    '#title' => t('Instructions'),
    '#type' => 'textarea',
    '#description' => t('Instruction of the recipe.'),
  );
  $form['ingredients'] = array(
    '#title' => t('Ingredients'),
    '#type' => 'textarea',
    '#description' => t('Ingredients of the recipe.'),
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit recipe'),
  );
  return $form;
}

/**
 * Implements hook_form().
 *
 */
function recipe_admin_form($form, &$form_state) {
  $form['recipe_mailto'] = array(
    '#title' => t('Email address'),
    '#type' => 'textfield',
    '#default_value' => variable_get('recipe_mailto', ''),
    '#description' => t('Email address for notifications.'),
  );
  return system_settings_form($form);
}

