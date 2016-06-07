(function ($) {

  Drupal.behaviors.addSingleCondoMap = {
    attach: function (context) {

      setTimeout(function () {
        $('body').once(function () {
          $('#condo-map').height(600);
          var condoPoint = Drupal.settings.singleCondoPoint;
          var neighbourhoodPolygon = Drupal.settings.singleCondoNeighbourhood;
          var mapLegend = Drupal.settings.mapLegend;
          var neighbourhoodsStyle = {
            "color": "#B9760B",
            "weight": 2,
            "opacity": 1,
            "fillOpacity": 0.3
          };
          var mymap = L.map('condo-map');
          L.tileLayer('http://{s}.tile.osm.org/{z}/{x}/{y}.png', {
            attribution: '&copy; <a href="http://osm.org/copyright">OpenStreetMap</a> contributors'
          }).addTo(mymap);

          if (neighbourhoodPolygon == null) {
            // default Toronto coordinates.
            mymap.setView([43.760, -79.390], 10);
            return;
          }

          mymap.scrollWheelZoom.disable();

          var polygon = L.geoJson(neighbourhoodPolygon, {style: neighbourhoodsStyle}).addTo(mymap);

          if (condoPoint != null) {
            L.marker(condoPoint).addTo(mymap);
          }
          else {  // if listing has no address. Calculate region center point.
            condoPoint = polygon.getBounds().getCenter();
          }
          mymap.setView(condoPoint, 16);
          L.circle(condoPoint, 250, {
            color: '#000',
            weight: 1,
            fillColor: '#0082FF',
            fillOpacity: 0.3
          }).addTo(mymap);

          // Added map legend to single condo map.
          var legend = L.control({position: 'topleft'});
          legend.onAdd = function (mymap) {
            var div = L.DomUtil.create('div', 'info legend');
            div.innerHTML = mapLegend;
            return div;
          };
          legend.addTo(mymap);
        });
      }, 1);
    }
  };

})(jQuery);
