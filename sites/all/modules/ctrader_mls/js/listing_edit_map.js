(function ($) {
  Drupal.behaviors.listingEditMap = {
    attach: function (context, settings) {
      var mymap,
        nLayer,
        listingPointSet,
        markerGeo;
      var neighbourhoodsData = Drupal.settings.neighbourhoodsMapData;
      var neighbourhoodsStyle = {
        "color": "#006737",
        "weight": 2,
        "opacity": 1,
        "fillOpacity": 0.3
      };

      var checkboxValue = $('.form-item-field-change-coord-manually-und .form-checkbox').is(":checked");

      if ($("#listing-edit-map").length || checkboxValue) {
        $('body').once(function () {
          $('#listing-edit-map').css("height", "600");
          //$('#listing-edit-map').css("width", "600");
          if (settings.listingPoint) {
            listingPointSet = settings.listingPoint;
          }
          else {
            listingPointSet = [43.73, -79.34];
          }
          mymap = L.map('listing-edit-map').setView(listingPointSet, 12);

          L.Icon.Default.imagePath = '/sites/all/libraries/leaflet/images';
          L.tileLayer('http://{s}.tile.osm.org/{z}/{x}/{y}.png', {
            attribution: '&copy; <a href="http://osm.org/copyright">OpenStreetMap</a> contributors'
          }).addTo(mymap);


          var labelOptions = {
            className: 'leaflet-label-other',
            direction: 'auto'
          };
          labelOptions.noHide = false;
          labelOptions.pane = 'popupPane';
          function onEachFeature(feature, layer) {
            // does this feature have a property named popupContent?
            if (feature.properties && feature.properties.popupContent) {
              if (feature.geometry.type == 'Point') {

                // Sends argument (listing id) and loads view block with listing short data.
                layer.bindPopup('Loading..');
                layer.on({
                  click: function () {
                    $.ajax({
                      type: 'POST',
                      url: '/build-point-popup',
                      data: {
                        'pointListingId': feature.id
                      },
                      beforeSend: function () {
                        layer.setPopupContent('<span class="map-popup-loader"></span>');
                      },
                      success: function (data) {
                        layer.setPopupContent(data);
                      }
                    });
                  }
                });
              }
              else {
                layer.bindLabel(feature.properties.popupContent, labelOptions);
              }
            }
          }

          nLayer = L.geoJson(neighbourhoodsData, {
            style: neighbourhoodsStyle,
            onEachFeature: onEachFeature
          }).addTo(mymap);

          settings.mymap = mymap;
          settings.mymapLayer = nLayer;

          var marker = L.marker(listingPointSet).addTo(mymap);
          L.circle(listingPointSet, 150, {
            color: 'red',
            fillColor: '#f03',
            fillOpacity: 0.3,
            weight: 1
          }).addTo(mymap);

          var drawnItems = new L.FeatureGroup();
          mymap.addLayer(drawnItems);
          var drawOptions = {
            position: 'topright',
            draw: {
              polyline: false,
              polygon: false,
              circle: false, // Turns off this drawing tool
              rectangle: false
            },
            edit: {
              featureGroup: drawnItems
            }
          };

          var drawControl = new L.Control.Draw(drawOptions);
          mymap.addControl(drawControl);

          mymap.on('draw:created', function (e) {
            var type = e.layerType,
              layer = e.layer;
            if (type === 'marker') {
              markerGeo = layer.toGeoJSON();
              var newCoordinates = JSON.stringify(markerGeo.geometry.coordinates.reverse());
              newCoordinates = newCoordinates.replace('[', '');
              newCoordinates = newCoordinates.replace(']', '');
              $('.field-name-field-search-point-string input').val(newCoordinates);
            }
            drawnItems.addLayer(layer);
          });
        });
      }
    }
  };

  Drupal.behaviors.rewriteLayerListingEdit = {
    attach: function (context, settings) {

    }
  };
})(jQuery);
