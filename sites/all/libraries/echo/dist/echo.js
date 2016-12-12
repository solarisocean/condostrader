/*! echo-js v1.7.3 | (c) 2016 @toddmotto | https://github.com/toddmotto/echo */
(function (root, factory) {
  if (typeof define === 'function' && define.amd) {
    define(function() {
      return factory(root);
    });
  } else if (typeof exports === 'object') {
    module.exports = factory;
  } else {
    root.echo = factory(root);
  }
})(this, function (root) {

  'use strict';

  var echo = {};

  var callback = function () {};

  var offset, poll, delay, useDebounce, unload;

  var isHidden = function (element) {
    return (element.offsetParent === null);
  };
  
  var inView = function (element, view) {
    if (isHidden(element)) {
      return false;
    }

    var box = element.getBoundingClientRect();
    return (box.right >= view.l && box.bottom >= view.t && box.left <= view.r && box.top <= view.b);
  };

  var debounceOrThrottle = function () {
    if(!useDebounce && !!poll) {
      return;
    }
    clearTimeout(poll);
    poll = setTimeout(function(){
      echo.render();
      poll = null;
    }, delay);
  };


  echo.init = function (opts) {
    opts = opts || {};

    // the code to be called when the dom has loaded
    // #document has its nodes

    var offsetAll = opts.offset || 0;
    var offsetVertical = opts.offsetVertical || offsetAll;
    var offsetHorizontal = opts.offsetHorizontal || offsetAll;
    var optionToInt = function (opt, fallback) {
      return parseInt(opt || fallback, 10);
    };
    offset = {
      t: optionToInt(opts.offsetTop, offsetVertical),
      b: optionToInt(opts.offsetBottom, offsetVertical),
      l: optionToInt(opts.offsetLeft, offsetHorizontal),
      r: optionToInt(opts.offsetRight, offsetHorizontal)
    };
    delay = optionToInt(opts.throttle, 250);
    useDebounce = opts.debounce !== false;
    unload = !!opts.unload;
    callback = opts.callback || callback;
    echo.render();
    //add event listener 'wheel' for sbcontainer element.
    function wheelLoad(sbcontainer) {
      var mcustomscrollbar = document.getElementById(sbcontainer);
      mcustomscrollbar.addEventListener('wheel', debounceOrThrottle, false);
    }
    if (document.addEventListener) {
      root.addEventListener('scroll', debounceOrThrottle, false);
      root.addEventListener('load', debounceOrThrottle, false);
      root.addEventListener('click', debounceOrThrottle, false);
      (function(window, document, undefined){
        window.onload = init;
        function init(){
          wheelLoad('mCSB_1_container');
          wheelLoad('mCSB_2_container');
        }
      })(window, document, undefined);
    } else {
      root.attachEvent('onscroll', debounceOrThrottle);
      root.attachEvent('onload', debounceOrThrottle);
    }
  };

  echo.render = function (context) {
    var nodes = (context || document).querySelectorAll('[data-echo], [data-echo-background]');
    var length = nodes.length;
    var src, elem;
    var view = {
      l: 0 - offset.l,
      t: 0 - offset.t,
      b: (root.innerHeight || document.documentElement.clientHeight) + offset.b,
      r: (root.innerWidth || document.documentElement.clientWidth) + offset.r
    };
    for (var i = 0; i < length; i++) {
      elem = nodes[i];
      if (inView(elem, view)) {

        if (unload) {
          elem.setAttribute('data-echo-placeholder', elem.src);
        }

        if (elem.getAttribute('data-echo-background') !== null) {
          elem.style.backgroundImage = 'url(' + elem.getAttribute('data-echo-background') + ')';
        }
        else if (elem.src !== (src = elem.getAttribute('data-echo'))) {
          elem.src = src;
        }

        if (!unload) {
          elem.removeAttribute('data-echo');
          elem.removeAttribute('data-echo-background');
        }

        callback(elem, 'load');
      }
      else if (unload && !!(src = elem.getAttribute('data-echo-placeholder'))) {

        if (elem.getAttribute('data-echo-background') !== null) {
          elem.style.backgroundImage = 'url(' + src + ')';
        }
        else {
          elem.src = src;
        }

        elem.removeAttribute('data-echo-placeholder');
        callback(elem, 'unload');
      }
    }
    if (!length) {
      echo.detach();
    }
  };

  echo.detach = function () {
    if (document.removeEventListener) {
      root.removeEventListener('scroll', debounceOrThrottle);
    } else {
      root.detachEvent('onscroll', debounceOrThrottle);
    }
    clearTimeout(poll);
  };

  return echo;

});
