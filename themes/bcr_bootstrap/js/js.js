(function ($) {
  Drupal.behaviors.bcrThemeJs = {
    attach: function (context, settings) {

      $('html', context).once(function() {
        var href = window.location.href;
        /*
        ajax pages load/scroll control
        on new page load with ajax, scroll to zero
         */
        $(document).ajaxComplete(function() {
          var hrefNew = window.location.href;
          if (href != hrefNew) {
            window.scrollTo(0, 0);
          }
        });
      });

      /*
      schedule page
       */
      $('body.schedule', context).once(function() {
        console.log('schedule tabs')
//        $("#scheduleTabs").airtimeWeekSchedule({
//          sourceDomain:'http://berlincommunityradio.airtime.pro',
//          dowText:{monday:"Monday", tuesday:"Tuesday", wednesday:"Wednesday", thursday:"Thursday", friday:"Friday", saturday:"Saturday", sunday:"Sunday"},
//          miscText:{time:"Temps", programName:"Nom du Programme", details:"Détails", readMore:"Lire La Suite"},
//          updatePeriod: 600 //seconds
//        });
//        var d = new Date().getDay();
//        $('#scheduleTabs').tabs({selected: d === 0 ? 6 : d-1, fx: { opacity: 'toggle' }});



        /*
         prevent weird scroll action on day click
         */



        var el = '.pane-airtimewidgets-airtime-weeklyprogram #scheduleTabs .ui-tabs-nav li';
//        var asdf;
//        $(el).click(function(e){
//          console.log('check click')
////          e.preventDefault();
////          return false;
//        });

//        /*
//        load current page
//         */
//        var curDay = $(this).attr('cur-day');
//        var activeTabTag = 'ui-tabs-active';
//        var tab = '.pane-airtimewidgets-airtime-weeklyprogram';
//        $(tab).each(function() {
//          console.log('found one')
//          $(this).css({
//            'background-color' : 'pink'
//          });
//          $(this).removeClass(activeTabTag);
//          $(this).remove();
//        });

      });


    }
  };
}(jQuery));