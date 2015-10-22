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
        /*
         prevent weird scroll action on day click in schedule
         */
        var el = '.pane-airtimewidgets-airtime-weeklyprogram #scheduleTabs .ui-tabs-nav li';
        $(el).click(function(e){
          e.preventDefault();
          return false;
        });

      });

      /*
      Blog Article node pages

      if an image is inserted inline, don't display it in image field
       */
      $('.page-node.node-type-blog', context).once(function() {
        var node = $('.view-mode-full.node-blog');
        var images = node.children('.field-name-field-image').find('.field-item img');
        var inserts = node.find('.field-name-body img.inline-insert');
        var imageUrls = []; var insertUrls = [];
        function recordSrc (imgSet, urls) {
          imgSet.each(function() {
            urls.push($(this).attr('src'));
          });
        };
        recordSrc(images, imageUrls);
        recordSrc(inserts, insertUrls);
        function inArray(needle,haystack) {
          var count=haystack.length;
          for(var i=0;i<count;i++)
          {
            if(haystack[i]===needle){return true;}
          }
          return false;
        }
        $.each(imageUrls, function(i, e) {
          if (inArray(e, insertUrls)) {
            console.log('match');
            images[i].remove();
          }
        });

      });



    }
  };
}(jQuery));