/**
 * Created on 21.04.16.
 */

(function ($) {

    Drupal.behaviors.addMap = {
        attach: function (context) {

            setTimeout(function () {
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
                        layer.on({
                            click: function () {
                                // console.log(layer);
                                if (!layer.selected) {
                                    layer.selected = true;
                                    layer.setStyle({
                                        color: "#FF5000"
                                    });
                                } else {
                                    layer.selected = false;
                                    layer.setStyle({
                                        color: "#B9760B"
                                    });
                                }
                            }
                        })
                    }

                    var neighbourhoodsData = Drupal.settings.neighbourhoodsMapData;
                    var neighbourhoodsStyle = {
                        "color": "#B9760B",
                        "weight": 2,
                        "opacity": 1,
                        "fillOpacity": 0.3
                    };

                    var neighbourhoodsLayer = L.geoJson(neighbourhoodsData, {
                        style: neighbourhoodsStyle,
                        onEachFeature: onEachFeature
                    });


                    // freeDraw tools.
                    var freeDrawLayer = new L.FreeDraw();

                    freeDrawLayer.options.createExitMode = false;

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
                                    freeDrawLayer.mode = 1;
                                } else {
                                    this.classList.add('active');
                                    freeDrawLayer.mode = 2;
                                }
                            };

                            deleteButton.onclick = function () {
                                if (addButton.classList.contains('active')) {
                                    addButton.click();
                                }

                                if (this.classList.contains('active')) {
                                    this.classList.remove('active');
                                    freeDrawLayer.mode = 1;
                                } else {
                                    this.classList.add('active');
                                    freeDrawLayer.mode = 8;
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
                        $(this).addClass('active');
                        $('.free-draw-tools').addClass('active');
                        neigButton.removeClass('active');
                        freeDrawLayer.addTo(mymap);
                        mymap.removeLayer(neighbourhoodsLayer);
                    });

                    neigButton.on('click', function () {
                        $(this).addClass('active');
                        $('.free-draw-tools').removeClass('active');
                        mapButton.removeClass('active');
                        mymap.removeLayer(freeDrawLayer);
                        neighbourhoodsLayer.addTo(mymap);
                    });

                    freeDrawLayer.on('markers', function getMarkers(eventData) {
                        var latLngs = eventData.latLngs;
                        // console.log(L.FreeDraw.Utilities.getMySQLMultiPolygon(eventData.latLngs));
                        // console.log(L.FreeDraw.Utilities.getMySQLPolygons(eventData.latLngs)[0]);
                    });

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


                    // mymap.addControl(drawControl);
                    mymap.on('draw:created', function (e) {
                        var type = e.layerType,
                            layer = e.layer;
                        drawnItems.addLayer(layer);
                    });


                    //markers clusters
                    var condosDataGeojson = Drupal.settings.condosMapData;
                    if (condosDataGeojson.length != 0) {
                        var markers = L.markerClusterGroup({});
                        var geoJsonLayer = L.geoJson(condosDataGeojson, {
                            onEachFeature: onEachFeature
                        });
                        markers.addLayer(geoJsonLayer);
                        mymap.addLayer(markers);
                        mymap.fitBounds(markers.getBounds());
                    }
                });
            }, 1);

        }
    };


    Drupal.behaviors.addMarks = {
        attach: function (context) {
        }
    };


})(jQuery);
