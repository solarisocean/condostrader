(function ($) {
    Drupal.behaviors.taxonomyMapEdit = {
        attach: function (context, settings) {
            var polygonField = $('#edit-field-community-geolocation').find('textarea');
            var polygon = JSON.parse(polygonField.val());
            var layer = L.geoJson(polygon, {
                "color": "#584a55",
                "weight": 2,
                "opacity": 1,
                "fillOpacity": 0.4
            });

            if ($('body').hasClass('page-taxonomy-term')) {
                $('#edit-field-community-geolocation').append('<div id="edit-map-taxonomy" style="height: 500px;"></div>');
            }

            var taxMapEdit = L.map('edit-map-taxonomy',  {
                doubleClickZoom: true,
                scrollWheelZoom: false
            }).setView([43.73, -79.34], 9);

            L.tileLayer('http://{s}.tile.osm.org/{z}/{x}/{y}.png', {
                attribution: '&copy; <a href="http://osm.org/copyright">OpenStreetMap</a> contributors'
            }).addTo(taxMapEdit);

            layer.addTo(taxMapEdit);
            taxMapEdit.fitBounds(layer.getBounds());

            var drawControl = new L.Control.Draw({
                edit: {
                    featureGroup: layer
                },
                draw: {
                    polygon: false,
                    polyline: false,
                    rectangle: false,
                    circle: false,
                    marker: false
                }
            }).addTo(taxMapEdit);

            taxMapEdit.on('draw:edited', function (e) {
                polygonField.val(JSON.stringify(e.layers.toGeoJSON().features[0].geometry));
            });

            taxMapEdit.on('draw:deleted', function (e) {
                polygonField.val('');
            });
        }
    };
})(jQuery);
