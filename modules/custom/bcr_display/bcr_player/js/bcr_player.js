(function($) {

  Drupal.behaviors.bootstrapSubthemeJs = {
  attach: function (context, settings) {


    $('.region-persistent', context).once(function() {



//      $("#jquery_jplayer_1").jPlayer({
//
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
        ready: function() {
          $(this).jPlayer("setMedia", {
            oga: "http://berlincommunityradio.out.airtime.pro:8000/berlincommunityradio_a"
          }).jPlayer("play");
          var click = document.ontouchstart === undefined ? 'click' : 'touchstart';
          var kickoff = function () {
            $("#jquery_jplayer_1").jPlayer("play");
            document.documentElement.removeEventListener(click, kickoff, true);
          };
          document.documentElement.addEventListener(click, kickoff, true);
        },
        supplied: "oga",
        swfPath: "/js",
        loop: true
      });


    });






  }
  };
})(jQuery);