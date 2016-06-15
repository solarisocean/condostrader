<?php

$plugin = array(
    'single' => TRUE,
    'title' => t('Sell A Condo Form'),
    'description' => t('Custom Form sell_condo_form'),
    'category' => t('CondosTrader'),
    'render callback' => 'sell_condo_form_render',
    'defaults' => array(),
    'all contexts' => TRUE,
);


function sell_condo_form_render() {
    $block = new stdClass();
    $form = drupal_get_form('sell_a_condo_form');
    $block->content = drupal_render($form);

    return $block;
}