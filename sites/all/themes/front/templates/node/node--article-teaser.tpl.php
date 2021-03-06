<?php
/**
 * @file
 * Template for article full view mode.
 */
?>
<?php if (!empty($media)): ?>
  <?php echo l($media, "node/{$node->nid}", array('html' => TRUE)); ?>
<?php endif; ?>
<h2><?php echo l($title, "node/{$node->nid}", array('html' => TRUE)); ?></h2>
<p class="img"><?php echo $description; ?></p>
<?php if (!empty($social)): ?>
  <?php echo $social; ?>
<?php endif; ?>
<?php if (!empty($tags)): ?>
  <?php echo $tags; ?>
<?php endif; ?>
