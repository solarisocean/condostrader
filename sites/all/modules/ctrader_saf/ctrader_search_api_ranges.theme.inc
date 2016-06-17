<?php

/**
 * @file
 * Theme functions for Min/Max UI Slider widget
 */

/**
 * Theme a jQuery slider.
 *
 * @param array $variables
 */
function theme_ctrader_search_api_ranges_slider(array $variables) {
  $output = '';
  $output .= '<div class="facet-helper">';
  $output .= '<span class="min">' . number_format($variables['slider']['range-min']['#value']) . '</span>';
  $output .= '<span class="max">' . number_format($variables['slider']['range-max']['#value']) . '</span>';
  $output .= '</div>';
  $output .= "<div class='search-api-ranges-widget' min-value=" . $variables['slider']['range-min']['#value'] . " max-value=" . $variables['slider']['range-max']['#value'] . ">";
  $output .= '</div>';

  return $output;
}
