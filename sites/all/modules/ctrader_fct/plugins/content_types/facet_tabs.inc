<?php

$plugin = array(
    'single' => TRUE,
    'title' => t('Facet tabs'),
    'description' => t('Block with facet tabs'),
    'category' => t('CondosTrader'),
    'render callback' => 'facet_tabs_render',
    'defaults' => array(),
    'all contexts' => TRUE,
);


function facet_tabs_render() {
    // Render as a block.
    $block = new stdClass();
    $block->content = '<div class="facet-tabs-block">';
    $block->content .= l(t('Find a condo'), '', array('attributes' => array('class' => array('find-condo-tab'))));
    $block->content .= l(t('Sell a condo'), 'sell-a-condo', array('attributes' => array('class' => array('sell-condo-tab'), 'target' => '_blank')));
    $block->content .= '</div>';
    return $block;
}