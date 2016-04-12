<?php




/**
 * @File slidesjs-slider-view.tpl.php
 * View template to display a list as a carousel.
 */
$logo = '<img src="/sites/all/themes/bcr_bootstrap/images/logotypebig.png">';
array_unshift($rows, $logo);
array_unshift($row_classes, 'logo-slider slidesjs-slider-item-0 odd');
$t=1;
$t=1;
?>
<div class="<?php print $slidesjs_slider_classes; ?>">
  <?php foreach ($rows as $id => $row): ?>

    <div class="<?php print $row_classes[$id]; ?>"><?php print $row; ?></div>
  <?php endforeach; ?>
</div>