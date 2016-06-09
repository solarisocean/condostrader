(function ($) {
  Drupal.behaviors.addSingUpMap = {
    attach: function (context, settings) {
      var mymap,  
            nLayer;

      $('body').once(function () {
        mymap = L.map('mapid').setView([43.73, -79.34], 9);
        
        L.tileLayer('http://{s}.tile.osm.org/{z}/{x}/{y}.png', {
          attribution: '&copy; <a href="http://osm.org/copyright">OpenStreetMap</a> contributors'
        }).addTo(mymap);
        
        nLayer = L.geoJson().addTo(mymap);

        settings.mymap = mymap;
        settings.mymapLayer = nLayer;
      });
    }
  };

  Drupal.behaviors.rewriteLayer = {
    attach: function (context, settings) {
      $('.page-user-register .selects select').change(function () {
        var selectName = $(this).attr('name').charAt($(this).attr('name').length - 2);
        var neighbourhoodsStyle = {
          "color": "#B9760B",
          "weight": 2,
          "opacity": 1,
          "fillOpacity": 0.3
        };

        if ($(this).val() === 'label_0') {
          settings.mymapLayer.clearLayers();
        }
        else if ($(this).val() !== 'label_1' && $(this).val() !== 'label_2') {
          $.ajax({
            type: 'POST',
            url: '/js-singup-map',
            data: {
              'signUpLoc': $(this).val()
            },
            success: function(data){
              settings.mymapLayer.clearLayers();
              settings.mymapLayer.addData(data).bindPopup(data.properties.popupContent).setStyle(neighbourhoodsStyle);
              settings.mymapLayer.on({
                click: function() {
                  settings.mymapLayer.openPopup();
                }
              });
              settings.mymap.fitBounds(settings.mymapLayer.getBounds());
            }
          });
        }
        else if ($(this).val() === 'label_1' || $(this).val() === 'label_2') {
          $.ajax({
            type: 'POST',
            url: '/js-singup-map',
            data: {
              'signUpLoc': $(this).prev().val()
            },
            success: function(data){
              settings.mymapLayer.clearLayers();
              settings.mymapLayer.addData(data).bindPopup(data.properties.popupContent).setStyle(neighbourhoodsStyle);
              settings.mymapLayer.on({
                click: function() {
                  settings.mymapLayer.openPopup();
                }
              });
              settings.mymap.fitBounds(settings.mymapLayer.getBounds());
            }
          });
        }

      });
    }
  };
})(jQuery);
