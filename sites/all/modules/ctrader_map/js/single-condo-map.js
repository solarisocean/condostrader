(function ($) {

  Drupal.behaviors.addSingleCondoMap = {
    attach: function (context) {

      setTimeout(function () {
        $('body').once(function () {
          $('#condo-map').height(600);
          var condoPoint = Drupal.settings.singleCondoPoint;
          var neighbourhoodPolygon = Drupal.settings.singleCondoNeighbourhood;
          var neighbourhoodsStyle = {
            "color": "#B9760B",
            "weight": 2,
            "opacity": 1,
            "fillOpacity": 0.3
          };
          var mymap = L.map('condo-map').setView(condoPoint, 16);
          L.tileLayer('http://{s}.tile.osm.org/{z}/{x}/{y}.png', {
            attribution: '&copy; <a href="http://osm.org/copyright">OpenStreetMap</a> contributors'
          }).addTo(mymap);
          var marker = L.marker(condoPoint).addTo(mymap);
          var polygon = L.geoJson(neighbourhoodPolygon, {style: neighbourhoodsStyle}).addTo(mymap);
          var circle = L.circle(condoPoint, 250, {
            color: '#000',
            weight: 1,
            fillColor: '#0082FF',
            fillOpacity: 0.3
          }).addTo(mymap);

        });
      }, 1);
    }
  };

})(jQuery);
