(function ($) {
  Drupal.behaviors.bcrThemeJs = {
    attach: function (context, settings) {

      $('#homepage-panel',context).once(function() {
        var el = $(this);
        var ppDonateImg = 'https://www.paypalobjects.com/en_US/DE/i/btn/btn_donateCC_LG.gif';
        var bcrDonateImg = 'sites/all/themes/bcr_bootstrap/images/donate_img_feb_2016.jpg';
        var form1 = '<form target="_blank" action="https://www.paypal.com/cgi-bin/webscr" method="post" target="_top">' +
          '<input type="hidden" name="cmd" value="_s-xclick">' +
          '<input type="hidden" name="hosted_button_id" value="YEH3WCZ2JUEVC">' +
          '<input type="image" src=" ' + bcrDonateImg + '"  class="donate" border="0" name="submit" alt="PayPal - The safer, easier way to pay online!">' +
          '<img alt="" border="0" src="https://www.paypalobjects.com/en_US/i/scr/pixel.gif" width="1" height="1"></form>';
        var form2 = '<form target="_blank" action="https://www.paypal.com/cgi-bin/webscr" method="post" target="_top">' +
          '<input type="hidden" name="cmd" value="_s-xclick">' +
          '<input type="hidden" name="hosted_button_id" value="YEH3WCZ2JUEVC">' +
          '<input type="image" src=" ' + ppDonateImg + '"  class="donate2" border="0" name="submit" alt="PayPal - The safer, easier way to pay online!">' +
          '<img alt="" border="0" src="https://www.paypalobjects.com/en_US/i/scr/pixel.gif" width="1" height="1"></form>';
        el.css({
          'background': 'none',
          'padding-top': '50px'
//          'background-size': 'inherit'
        }).prepend(form1+form2);
        var donate1 = el.find('.donate');
        var donate2 = el.find('.donate2');
        donate1.css({
          'width': '100%',
          'height': 'auto'
        });
        donate2.css({
          'margin-bottom': '50px'
        });

      });

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
      var nodeSelector = '.page-node.node-type-blog .node.view-mode-full';
      var fieldSelector = '.field-type-image';
      var imgSelector = '.field-item img';
      var inlineSelector = '.field-name-body img.inline-insert';
      $(nodeSelector, context).once(function() {
        var node = $(this);
        var images = node.children(fieldSelector).find(imgSelector);
        var inserts = node.find(inlineSelector);
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
            images[i].remove();
          }
        });

      });

    }
  };
}(jQuery));