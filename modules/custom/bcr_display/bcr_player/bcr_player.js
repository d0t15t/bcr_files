(function($) {

  Drupal.behaviors.bootstrapSubthemeJs = {
  attach: function (context, settings) {


    $('.region-persistent', context).once(function() {


      /**
       * original player control - doesn't work in Safari
       */
//      $("#jquery_jplayer_1").jPlayer({
//        ready: function () {
//          $(this).jPlayer("setMedia", {
//            oga: "http://berlincommunityradio.out.airtime.pro:8000/berlincommunityradio_a"
//          }).jPlayer("play");
//        },
//        ended: function (event) {
//          $(this).jPlayer("play");
//        },
//        solution:"flash,html",
//        swfPath: "js",
//        supplied: "oga"
//      });


      $("#jquery_jplayer_1").jPlayer({
        ready: function (event) {
          $(this).jPlayer("setMedia", {
            mp3:"http://berlincommunityradio.out.airtime.pro:8000/berlincommunityradio_a"
//            mp3:"http://berlincommunityradio.out.airtime.pro:8000/berlincommunityradio_a"
          });
          $(this).jPlayer('play');
        },
        supplied: "mp3"
//        supplied: "oga, mp3"
//        swfPath: "../../../../../libraries/jPlayer/dist/jplayer",
//        wmode: "window"
//        solution:"flash",
      });





    });






  }};
})(jQuery);