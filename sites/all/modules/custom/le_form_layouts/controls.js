/**
 * @file
 * Couple of tricks for work with form actions buttons.
 */

(function($) {
  Drupal.behaviors.le_form_layouts = {
    attach: function(context) {
      $('div.form:has(div.column-main div.form-actions):not(.rubik-processed)').each(function() {
        $(this).addClass('rubik-processed');
        $('div.column-main div.form-actions', $(this)).show();
      });

      var $el = $('.column-side #edit-actions-1, .status-bar');
      if ($el[0]) {
        $(window).scroll(function() {
          var scrolltop = (document.documentElement.scrollTop ?
            document.documentElement.scrollTop :
            document.body.scrollTop),
            top = $el.offset().top;
          if (!$el.hasClass('inviewport') && scrolltop + 8 > top) {
              $el.data('top', top);
              $el.addClass('inviewport');
          }
          if ($el.hasClass('inviewport') && scrolltop + 8 <= $el.data('top')) {
            $el.removeClass('inviewport');
          }
        });
      }
    }
  };
})(jQuery);
