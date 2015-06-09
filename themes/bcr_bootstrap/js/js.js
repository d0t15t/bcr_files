(function ($) {
  Drupal.behaviors.bcrThemeJs = {
    attach: function (context, settings) {

      $('html', context).once(function() {
        var href = window.location.href;
        console.log(href)
        $(document).ajaxComplete(function() {
          var hrefNew = window.location.href;
          console.log(hrefNew);
          if (href != hrefNew) {
            window.scrollTo(0, 0);
          }
        });


      });

    }
  };
}(jQuery));