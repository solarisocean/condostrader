(function ($) {

    Drupal.behaviors.addMap = {
        attach: function (context, settings) {

            setTimeout(function () {
                $('body').once(function () {
                    var mymap = L.map('mapid',  {
                        doubleClickZoom: true,
                        scrollWheelZoom: false,
                        minZoom:9,
                        maxBounds: [
                            //south west
                            [43.124230, -80.221427],
                            //north east
                            [45.116859, -78.179749]
                    ]
                    }).setView([43.73, -79.34], 9);

                    settings.mymap = mymap;

                    L.tileLayer('http://{s}.tile.osm.org/{z}/{x}/{y}.png', {
                        attribution: '&copy; <a href="http://osm.org/copyright">OpenStreetMap</a> contributors'
                    }).addTo(mymap);
                    L.Icon.Default.imagePath = '/sites/all/libraries/leaflet/images';


                  // Needs for editing neighbourhoods polygons on 'search-results'
                  // page.
                  //var drawnItems = new L.FeatureGroup();
                  //mymap.addLayer(drawnItems);
                  //var drawOptions = {
                  //  position: 'topright',
                  //  draw: {
                  //    polyline: {
                  //      shapeOptions: {
                  //        color: '#f357a1',
                  //        weight: 10
                  //      }
                  //    },
                  //    polygon: {
                  //      allowIntersection: false, // Restricts shapes to simple polygons
                  //      drawError: {
                  //        color: '#e1e100', // Color the shape will turn when intersects
                  //        message: '<strong>Oh snap!<strong> you can\'t draw that!' // Message that will show when intersect
                  //      },
                  //      showArea: false,
                  //      shapeOptions: {
                  //        stroke: true,
                  //        color: '#0051F4',
                  //        weight: 1,
                  //        opacity: 1,
                  //        fill: true,
                  //        fillColor: null, //same as color by default
                  //        fillOpacity: 0.2,
                  //      }
                  //    },
                  //    circle: false, // Turns off this drawing tool
                  //    rectangle: {
                  //      shapeOptions: {
                  //        clickable: false
                  //      }
                  //    }
                  //  },
                  //  edit: {
                  //    featureGroup: drawnItems
                  //  }
                  //};
                  //
                  //var drawControl = new L.Control.Draw(drawOptions);
                  //mymap.addControl(drawControl);
                  //
                  //mymap.on('draw:created', function (e) {
                  //  var type = e.layerType,
                  //    layer = e.layer;
                  //  if (type === 'rectangle') {
                  //    layer.on('mouseover', function () {
                  //      alert(layer.getLatLngs());
                  //    });
                  //  }
                  //  drawnItems.addLayer(layer);
                  //  var polygonCoordinates = JSON.stringify(layer.toGeoJSON());
                  //  console.log(layer.toGeoJSON());
                  //  console.log(polygonCoordinates);
                  //
                  //});
                  //
                  //mymap.on('draw:edited', function (e) {
                  //  var layers = e.layers;
                  //  layers.eachLayer(function (layer) {
                  //    if (layer instanceof L.Polygon) {
                  //      var polygonCoordinates = JSON.stringify(layer.toGeoJSON());
                  //      console.log('Edited: ' + polygonCoordinates);
                  //    }
                  //  });
                  //});

                    var inputRes = $('#-ctrader-saf-search-button-form input[name="geo_loc"]');
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
                                  beforeSend: function() {
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
                            layer.on("mouseover", function() {
                                layer.setStyle({
                                    color: "#FF5000"
                                });
                            });
                            layer.on("mouseout", function() {
                              layer.setStyle({
                                  color: "#B9760B"
                              });
                            });
                            layer.on({
                                  click: function () {
                                      $("#-ctrader-saf-search-button-form input[name='region'], #-ctrader-saf-search-button-form input[name='region_1'], #-ctrader-saf-search-button-form input[name='region_2']").val('');
                                      if (!layer.selected) {
                                          inputRes.val(function(i, val) {
                                              return val + (!val ? '' : ', ') + 'tid' + layer.feature.id;
                                          });

                                          layer.selected = true;
                                          if (layer._spiderLeg === undefined && !layer.hasOwnProperty('_icon')) {
                                              layer.setStyle({
                                                  color: "#FF5000"
                                              });
                                          }
                                      } else {
                                          String.prototype.replaceBetween = function(start, end, what) {
                                              return this.substring(0, start) + what + this.substring(end);
                                          };

                                          inputRes.val(function(i, val){
                                              var regId = 'tid' + layer.feature.id;
                                              var start = val.search(regId);
                                              var end = val.search(regId) +regId.length;
                                              if (val.charAt(start - 2) === ',') {
                                                  return val.replaceBetween(start - 2, end, '');
                                              } else if (val.charAt(end) == ',') {
                                                  return val.replaceBetween(start, end +2, '');
                                              } else {
                                                  return val.replaceBetween(start, end, '');
                                              }

                                          });

                                          layer.selected = false;

                                          if (!layer.hasOwnProperty('_icon')) {
                                              layer.setStyle({
                                                  color: "#B9760B"
                                              });
                                          }
                                      }
                                  }
                              });

                          }
                        }

                        if (settings.hasOwnProperty('chosenNeighbourhoodsTermIds')) {
                            for (var i = 0; i < settings.chosenNeighbourhoodsTermIds.length; i++) {
                                if (feature.id === settings.chosenNeighbourhoodsTermIds[i]) {
                                    layer.setStyle({
                                        color: "#FF5000"
                                    });
                                }
                            }
                        }

                    }

                    var neighbourhoodsData = Drupal.settings.neighbourhoodsMapData;
                    var neighbourhoodsStyle = {
                        "color": "#B9760B",
                        "weight": 2,
                        "opacity": 1,
                        "fillOpacity": 0.3
                    };
                    var neighbourhoodsLayer;

                    if (settings.hasOwnProperty('userPolygonSearch')) {
                        neighbourhoodsLayer = L.geoJson(settings.userPolygonSearch, {
                            style: neighbourhoodsStyle,
                            onEachFeature: onEachFeature
                        });
                        settings.mymapLayer= neighbourhoodsLayer;
                        setTimeout(function() {
                            mapButton.trigger('click');
                        }, 300);
                    } else if (settings.hasOwnProperty('locationSelect')) {
                        neighbourhoodsLayer = L.geoJson(settings.locationSelect, {
                            style: neighbourhoodsStyle,
                            onEachFeature: onEachFeature
                        });
                        settings.mymapLayer= neighbourhoodsLayer;
                    } else  {
                        neighbourhoodsLayer = L.geoJson(neighbourhoodsData, {
                            style: neighbourhoodsStyle,
                            onEachFeature: onEachFeature
                        });
                        settings.mymapLayer= neighbourhoodsLayer;
                    }

                    setTimeout(function() {
                        mymap.fitBounds(neighbourhoodsLayer.getBounds());
                    }, 300);


                    // freeDraw tools.
                    var freeDrawLayer = new L.FreeDraw();

                    freeDrawLayer.options.exitModeAfterCreate(false);
                    freeDrawLayer.options.destroyPreviousPolygon(true);
                    freeDrawLayer.options.allowMultiplePolygons(false);


                    var customControl = L.Control.extend({

                        options: {
                            position: 'topleft'
                        },

                        onAdd: function (mymap) {
                            var container = L.DomUtil.create('div', 'leaflet-bar leaflet-control leaflet-control-custom free-draw-tools');
                            var addButton = this.draw = L.DomUtil.create('a', 'map-draw-icon', container);
                            var deleteButton = this.delete = L.DomUtil.create('a', 'map-delete-icon', container);

                            addButton.onclick = function () {
                                if (deleteButton.classList.contains('active')) {
                                    deleteButton.click();
                                }

                                if (this.classList.contains('active')) {
                                    this.classList.remove('active');
                                    freeDrawLayer.setMode(L.FreeDraw.MODES.VIEW);
                                } else {
                                    this.classList.add('active');
                                    freeDrawLayer.setMode(L.FreeDraw.MODES.CREATE);
                                }
                            };

                            deleteButton.onclick = function () {
                                if (addButton.classList.contains('active')) {
                                    addButton.click();
                                }

                                if (this.classList.contains('active')) {
                                    this.classList.remove('active');
                                    freeDrawLayer.setMode(L.FreeDraw.MODES.VIEW);
                                } else {
                                    this.classList.add('active');
                                    freeDrawLayer.setMode(L.FreeDraw.MODES.DELETE);
                                }
                            };

                            return container;
                        }
                    });

                    mymap.addControl(new customControl());

                    var neigButton = $('.facet-map-block-neighbourhood'),
                        mapButton = $('.facet-map-block-map-search');

                    neighbourhoodsLayer.addTo(mymap);
                    neigButton.addClass('active');

                    mapButton.on('click', function () {
                        inputRes.val('');
                        $(this).addClass('active');
                        $('.free-draw-tools').addClass('active');
                        neigButton.removeClass('active');
                        freeDrawLayer.addTo(mymap);
                        if (!settings.hasOwnProperty('userPolygonSearch')) {
                            mymap.removeLayer(neighbourhoodsLayer);
                            $('select[name="select_subject[hierarchical_select][selects][0]"]').val('label_0').trigger('change');
                        }
                        neighbourhoodsLayer.eachLayer(function(layer) {
                            if (layer.selected) {
                                layer.selected = false;
                                layer.setStyle({
                                    color: "#B9760B"
                                });
                            }
                        });
                    });

                    neigButton.on('click', function () {
                        inputRes.val('');
                        $(this).addClass('active');
                        $('.free-draw-tools').removeClass('active');
                        mapButton.removeClass('active');
                        if (settings.hasOwnProperty('userPolygonSearch')) {
                            delete settings.userPolygonSearch;
                            neighbourhoodsLayer.clearLayers();
                        } else {
                            mymap.removeLayer(freeDrawLayer);
                        }
                        neighbourhoodsLayer = L.geoJson(neighbourhoodsData, {
                            style: neighbourhoodsStyle,
                            onEachFeature: onEachFeature
                        });
                        settings.mymapLayer= neighbourhoodsLayer;

                        neighbourhoodsLayer.addTo(mymap);
                        mymap.fitBounds(neighbourhoodsLayer.getBounds());
                    });

                    $('select[name="select_subject[hierarchical_select][selects][0]"]').change(function() {
                        if (settings.hasOwnProperty('userPolygonSearch')) {
                            neigButton.trigger('click');
                        }
                    });

                    //markers clusters
                    var condosDataGeojson = Drupal.settings.condosMapData;
                    if (condosDataGeojson.length != 0) {
                        var markers = L.markerClusterGroup({
                            spiderfyOnMaxZoom: true,
                            showCoverageOnHover: false,
                            zoomToBoundsOnClick: true
                        });
                        var geoJsonLayer = L.geoJson(condosDataGeojson, {
                            onEachFeature: onEachFeature
                        });
                        markers.addLayer(geoJsonLayer);
                        mymap.addLayer(markers);
                        if ($('.pane-ctrader-saf-neighbourhoods-hs select').val() == 'label_0' || 'label_1') {
                            $('.pane-ctrader-saf-neighbourhoods-hs select').each(function() {
                                $(this).change(function() {

                                    if ($(this).val() !== 'label_0') {
                                        mymap.removeLayer(markers);
                                    }
                                });
                            });
                        }
                        mymap.fitBounds(markers.getBounds());
                    }
                    freeDrawLayer.on('markers', function getMarkers(eventData) {
                        var latLngs = eventData.latLngs;
                        inputRes.val(L.FreeDraw.Utilities.getMySQLPolygons(eventData.latLngs));
                        console.log(L.FreeDraw.Utilities.getMySQLPolygons(eventData.latLngs));
                    });

                });
            }, 1);

        }
    };


    Drupal.behaviors.addMarks = {
        attach: function (context, settings) {
            setTimeout(function () {
                $('.page-search-results .selects select').change(function () {
                    $('#-ctrader-saf-search-button-form input[name="geo_loc"]').val('');
                    
                    // var selectName = $(this).attr('name').charAt($(this).attr('name').length - 2);
                    // var neighbourhoodsStyle = {
                    //     "color": "#B9760B",
                    //     "weight": 2,
                    //     "opacity": 1,
                    //     "fillOpacity": 0.3
                    // };

                    if ($(this).val() === 'label_0_______') {
                        settings.mymapLayer.clearLayers().addData(settings.neighbourhoodsMapData);
                        settings.mymap.fitBounds(settings.mymapLayer.getBounds());
                    }
                    else if ($(this).val() !== 'label_1' && $(this).val() !== 'label_2') {
                        $.ajax({
                            type: 'POST',
                            url: '/js-singup-map',
                            data: {
                                'locationSelect': $(this).val()
                            },
                            success: function(data){
                                settings.mymapLayer.clearLayers();
                                settings.mymapLayer.addData(data);
                                // settings.mymapLayer.addData(data).bindPopup(data.properties.popupContent).setStyle(neighbourhoodsStyle);
                                // settings.mymapLayer.on({
                                //     click: function() {
                                //         settings.mymapLayer.openPopup();
                                //     }
                                // });
                                settings.mymap.fitBounds(settings.mymapLayer.getBounds());
                            }
                        });
                    }
                    else if ($(this).val() === 'label_1' || $(this).val() === 'label_2' || $(this).val() === 'label_0') {
                        $.ajax({
                            type: 'POST',
                            url: '/js-singup-map',
                            data: {
                                'locationSelect': $(this).prev().val()
                            },
                            success: function(data){
                                settings.mymapLayer.clearLayers();
                                settings.mymapLayer.addData(data);
                                // settings.mymapLayer.addData(data).bindPopup(data.properties.popupContent).setStyle(neighbourhoodsStyle);
                                // settings.mymapLayer.on({
                                //     click: function() {
                                //         settings.mymapLayer.openPopup();
                                //     }
                                // });
                                settings.mymap.fitBounds(settings.mymapLayer.getBounds());
                            }
                        });
                    }

                });
            }, 1);

        }
    };


})(jQuery);
