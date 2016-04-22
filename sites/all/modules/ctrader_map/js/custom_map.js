/**
 * Created on 21.04.16.
 */

(function ($) {

  Drupal.behaviors.addMap = {
    attach: function (context) {
      var mymap = L.map('mapid').setView([43.76, -79.39], 10);
      L.tileLayer('http://{s}.tile.osm.org/{z}/{x}/{y}.png', {
        attribution: '&copy; <a href="http://osm.org/copyright">OpenStreetMap</a> contributors'
      }).addTo(mymap);

      function onEachFeature(feature, layer) {
        // does this feature have a property named popupContent?
        if (feature.properties && feature.properties.popupContent) {
          layer.bindPopup(feature.properties.popupContent);
        }
      }

      var condosDataGeojson = Drupal.settings.condosMapData;

      //L.geoJson(condosDataGeojson, {
      //  onEachFeature: onEachFeature
      //}).addTo(mymap);


      // draw tools
      var drawnItems = new L.FeatureGroup();
      mymap.addLayer(drawnItems);
      var drawControl = new L.Control.Draw({
        position: 'topright',
        draw: {
          polygon: {
            shapeOptions: {
              color: 'steelblue',
              weight: 1,
              opacity: .7,
              dashArray: '20,3',
              lineJoin: 'round'
            },
          },
          polyline: {
            shapeOptions: {
              color: 'red'
            },
          },
          rect: {
            shapeOptions: {
              color: 'green'
            },
          },
          circle: {
            shapeOptions: {
              color: 'steelblue'
            },
          },
        },
        edit: {
          featureGroup: drawnItems
        }
      });
      mymap.addControl(drawControl);
      mymap.on('draw:created', function (e) {
        var type = e.layerType,
          layer = e.layer;
        drawnItems.addLayer(layer);
      });


      //markers clusters
      var markers = L.markerClusterGroup({});
      var geoJsonLayer = L.geoJson(condosDataGeojson, {
        onEachFeature: onEachFeature
      });
      markers.addLayer(geoJsonLayer);
      mymap.addLayer(markers);
      //mymap.fitBounds(markers.getBounds());

    }
  };


  Drupal.behaviors.addMarks = {
    attach: function (context) {
    }
  };


})(jQuery);
