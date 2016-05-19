(function ($) {

  Drupal.behaviors.addMap = {
    attach: function (context) {
      $('body').once(function () {
        var mymap = L.map('mapid').setView([43.73, -79.34], 9);
        L.tileLayer('http://{s}.tile.osm.org/{z}/{x}/{y}.png', {
          attribution: '&copy; <a href="http://osm.org/copyright">OpenStreetMap</a> contributors'
        }).addTo(mymap);

        function onEachFeature(feature, layer) {
          // does this feature have a property named popupContent?
          if (feature.properties && feature.properties.popupContent) {
            layer.bindPopup(feature.properties.popupContent);
          }
        }

        var neighbourhoodsData = Drupal.settings.neighbourhoodsMapData;
        var neighbourhoodsStyle = {
          "color": "#B9760B",
          "weight": 2,
          "opacity": 1,
          "fillOpacity": 0.3
        };
        L.geoJson(neighbourhoodsData, {
          style: neighbourhoodsStyle,
          onEachFeature: onEachFeature
        }).addTo(mymap);

        // draw tools
        var drawnItems = new L.FeatureGroup();
        mymap.addLayer(drawnItems);
        var drawControl = new L.Control.Draw({
          position: 'topright',
          draw: {
            polygon: {
              shapeOptions: {
                color: '#2DA56F',
                weight: 1,
                opacity: .7,
                dashArray: '20,3',
                lineJoin: 'round'
              }
            },
            polyline: {
              shapeOptions: {
                color: 'green'
              }
            },
            rect: {
              shapeOptions: {
                color: 'steelblue'
              }
            },
            circle: {
              shapeOptions: {
                color: 'green'
              }
            }
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
      });
    }
  };
})(jQuery);