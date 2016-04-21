/**
 * Created on 21.04.16.
 */

(function ($) {

  Drupal.behaviors.addMap = {
    attach: function (context) {
      var mymap = L.map('mapid').setView([43.76, -79.39], 10);
      L.tileLayer('http://{s}.basemaps.cartocdn.com/light_all/{z}/{x}/{y}.png', {
        attribution: '&copy; <a href="http://osm.org/copyright">OpenStreetMap</a> contributors'
      }).addTo(mymap);
      //var marker = L.marker([43.76, -79.39]).addTo(mymap);

      function onEachFeature(feature, layer) {
        // does this feature have a property named popupContent?
        if (feature.properties && feature.properties.popupContent) {
          layer.bindPopup(feature.properties.popupContent);
        }
      }

      var condosDataGeojson = Drupal.settings.condosMapData;

      L.geoJson(condosDataGeojson, {
        onEachFeature: onEachFeature
      }).addTo(mymap);
    }
  };


  Drupal.behaviors.addMarks = {
    attach: function (context) {
    }
  };


})(jQuery);
