/**
 * Created on 21.04.16.
 */

(function ($) {

    Drupal.behaviors.addMap = {
        attach: function (context) {

            setTimeout(function () {
                $('body').once(function () {
                    var mymap = L.map('mapid',  {
                        doubleClickZoom: true,
                        scrollWheelZoom: false
                    }).setView([43.73, -79.34], 9);

                    L.tileLayer('http://{s}.tile.osm.org/{z}/{x}/{y}.png', {
                        attribution: '&copy; <a href="http://osm.org/copyright">OpenStreetMap</a> contributors'
                    }).addTo(mymap);

                    var inputRes = $('#-ctrader-saf-search-button-form input[name="geo_loc"]');

                    function onEachFeature(feature, layer) {
                        // does this feature have a property named popupContent?
                        if (feature.properties && feature.properties.popupContent) {
                            layer.bindPopup(feature.properties.popupContent);
                        }

                        layer.on({
                            click: function () {
                                if (!layer.selected) {
                                    inputRes.val(function(i, val) {
                                        return val + (!val ? '' : ', ') + 'tid' + layer._leaflet_id;
                                    });

                                    layer.selected = true;

                                    if (layer._spiderLeg === undefined) {
                                        layer.setStyle({
                                            color: "#FF5000"
                                        });
                                    }
                                } else {
                                    String.prototype.replaceBetween = function(start, end, what) {
                                        return this.substring(0, start) + what + this.substring(end);
                                    };

                                    inputRes.val(function(i, val){
                                        var regId = 'tid' + layer._leaflet_id;
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
                        mymap.removeLayer(neighbourhoodsLayer);
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
                        mymap.removeLayer(freeDrawLayer);
                        neighbourhoodsLayer.addTo(mymap);
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
                        mymap.fitBounds(markers.getBounds());
                    }
                    

                    freeDrawLayer.on('markers', function getMarkers(eventData) {
                        var latLngs = eventData.latLngs;
                        inputRes.val(L.FreeDraw.Utilities.getMySQLPolygons(eventData.latLngs));
                        // console.log(L.FreeDraw.Utilities.getMySQLMultiPolygon(eventData.latLngs));
                        // console.log(L.FreeDraw.Utilities.getMySQLPolygons(eventData.latLngs)[0]);
                    });
                    
                });
            }, 1);

        }
    };


    Drupal.behaviors.addMarks = {
        attach: function (context) {
        }
    };


})(jQuery);
