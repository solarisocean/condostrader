(function ($) {

  Drupal.behaviors.addSingUpMap = {
    attach: function (context) {
      var mymap;
      var neighbourhoodsData;
      var neighbourhoodsStyle = {
        "color": "#B9760B",
        "weight": 2,
        "opacity": 1,
        "fillOpacity": 0.3
      };
      function onEachFeature(feature, layer) {
        // does this feature have a property named popupContent?
        if (feature.properties && feature.properties.popupContent) {
          layer.bindPopup(feature.properties.popupContent);
        }
      }

      $('.page-user-register .selects select').change(function() {

        console.log('Form change!');

        $.ajax({
          type: 'POST',
          //url: window.location.pathname,
          url: '/js-singup-map',
          data: {
            'signUpLoc': $(this).val()
          },
          //dataType: 'json',
          success: function(data){
            console.log(data);
            //console.log('fdf', msg);
            //alert(data);
            neighbourhoodsData = data;

            var nLayer = L.geoJson(data, {
              style: neighbourhoodsStyle,
              onEachFeature: onEachFeature
            });

            //console.log(mymap.hasLayer(nLayer));
            if (mymap.hasLayer(nLayer)) {
              mymap.removeLayer(nLayer);
            }

            mymap.addLayer(nLayer);



          }
        });

      });

      $('body').once(function () {



        mymap = L.map('mapid').setView([43.73, -79.34], 9);
        L.tileLayer('http://{s}.tile.osm.org/{z}/{x}/{y}.png', {
          attribution: '&copy; <a href="http://osm.org/copyright">OpenStreetMap</a> contributors'
        }).addTo(mymap);



        //neighbourhoodsData = Drupal.settings.neighbourhoodsMapData;

        //console.log(neighbourhoodsData);


        var nLayer = L.geoJson(neighbourhoodsData, {
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
