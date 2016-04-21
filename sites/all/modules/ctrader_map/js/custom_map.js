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


      var LeafIcon = L.Icon.extend({
        options: {
          shadowUrl:
            'http://leafletjs.com/docs/images/leaf-shadow.png',
          iconSize:     [38, 95],
          shadowSize:   [50, 64],
          iconAnchor:   [22, 94],
          shadowAnchor: [4, 62],
          popupAnchor:  [-3, -76]
        }
      });

      var greenIcon = new LeafIcon({
        iconUrl: 'http://leafletjs.com/docs/images/leaf-green.png'
      });


      mymap.on('draw:created', function (e) {
        var type = e.layerType,
          layer = e.layer;
        drawnItems.addLayer(layer);
      });



    }
  };


  Drupal.behaviors.addMarks = {
    attach: function (context) {
    }
  };


})(jQuery);
