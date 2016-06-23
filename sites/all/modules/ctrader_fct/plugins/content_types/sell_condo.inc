<?php

$plugin = array(
    'single' => TRUE,
    'title' => t('Sell A Condo Form'),
    'description' => t('Entityform sell a condo'),
    'category' => t('CondosTrader'),
    'render callback' => 'sell_condo_form_render',
    'defaults' => array(),
    'all contexts' => TRUE,
);


function sell_condo_form_render() {
    module_load_include('inc', 'entityform', 'entityform.admin');
    $entity_form_name = 'sell_a_condo';
    $render_estimate_form = entityform_form_wrapper(entityform_empty_load($entity_form_name), 'submit', 'embedded');
    
    $block = new stdClass();
    $block->title = '';
    $block->content = $render_estimate_form;

    return $block;
}