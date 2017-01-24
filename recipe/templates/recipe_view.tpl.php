<?php
/**
 * @file recipe_view.tpl.php
 * Default template implementation to render the values of a recipe.
 *
 */

$fields = $variables['recipe'];
?>

<ul>
  <li>
    <b><?php print t('Date') ?>:</b>
    <?php print format_date($fields->created, 'long') ?>
  </li>
  <li>
    <b><?php print t('Language') ?>:</b>
    <?php print t($fields->lang) ?>
  </li>
  <li>
    <b><?php print t('Title') ?>:</b>
    <?php print $fields->title ?>
  </li>
  <li>
    <b><?php print t('Author') ?></b>
    <?php print $fields->author ?>
  </li>
  <li>
    <b><?php print t('Email') ?>:</b>
    <?php print $fields->email ?>
  </li>
  <li>
    <b><?php print t('Description') ?>:</b>
    <?php print $fields->description ?>
  </li>
  <li>
    <b><?php print t('Instruction') ?>:</b>
    <?php print $fields->instruction ?>
  </li>
  <li>
    <b><?php print t('Ingredients') ?>:</b>
    <?php print $fields->ingredients?>
  </li>
</ul>
