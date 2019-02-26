
 var OriginTitle = document.title;
 var titleTime;
 document.addEventListener('visibilitychange', function () {
     if (document.hidden) {
         $('[rel="icon"]').attr('href', "/img/TEP.ico");
         document.title = '╭(°A°`)╮ 蟹蟹死了！';
         clearTimeout(titleTime);
     }
     else {
         $('[rel="icon"]').attr('href', "https://crab-in-the-northeast.github.io/images/favicon.ico");
         document.title = '(ฅ>ω<*ฅ) 嘿嘿，我怎么会死呢' + OriginTitle;
         titleTime = setTimeout(function () {
             document.title = OriginTitle;
         }, 2000);
     }
 });