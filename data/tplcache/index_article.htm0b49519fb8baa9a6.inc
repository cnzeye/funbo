<?php
$z[0]=Array("include","",2,37);
$z[0][4]['filename']="head.htm";
$z[1]=Array("arclist","\r\nlinkarr[[field:global.autoindex/]] = \"[field:arcurl/]\";\r\npicarr[[field:global.autoindex/]]  = \"[field:litpic/]\";\r\ntextarr[[field:global.autoindex/]] = \"[field:title function='html2text(@me)'/]\";\r\n",401,645);
$z[1][4]['flag']="f";
$z[1][4]['row']="5";
$z[2]=Array("arclist","\r\n    <h2><a href=\"[field:arcurl/]\">[field:title/]</a></h2>\r\n    <p>[field:description function='cn_substr(@me,110)'/]...<a href=\"[field:arcurl/]\">[查看全文]</a></p>\r\n  ",1122,1345);
$z[2][4]['flag']="h";
$z[2][4]['limit']="0,1";
$z[3]=Array("arclist","\r\n    <li><a href=\"[field:arcurl/]\">[field:title/]</a></li>\r\n    ",1403,1518);
$z[3][4]['flag']="h";
$z[3][4]['limit']="1,6";
$z[4]=Array("arclist","\r\n    <li><a href=\"[field:arcurl/]\">[field:image/]<span class=\"title\">[field:title/]</span></a></li>\r\n    ",1694,1895);
$z[4][4]['row']="5";
$z[4][4]['orderby']="pubdate";
$z[4][4]['type']="image.";
$z[4][4]['imgwidth']="124";
$z[4][4]['imgheight']="94";
$z[5]=Array("channelartlist","\r\n <dl class=\"tbox\">\r\n  <dt><strong><a href=\"{dede:field name='typeurl'/}\">{dede:field name='typename'/}</a></strong><span class=\"more\"><a href=\"{dede:field name='typeurl'/}\">更多...</a></span></dt>\r\n  <dd>\r\n   <ul class=\"d1 ico3\">\r\n    {dede:arclist titlelen='60' row='8'}\r\n    <li><span class=\"date\">[field:pubdate function=\"MyDate('m-d',@me)\"/]</span><a href=\"[field:arcurl /]\">[field:title /]</a></li>\r\n    {/dede:arclist}\r\n  </ul>\r\n</dd>\r\n</dl>\r\n",1969,2465);
$z[6]=Array("arclist","\r\n      <li><a href=\"[field:arcurl/]\">[field:title/]</a>\r\n       <p>[field:description function='cn_substr(@me,80)'/]...</p>\r\n     </li>\r\n     ",2703,2902);
$z[6][4]['flag']="c";
$z[6][4]['titlelen']="42";
$z[6][4]['row']="6";
$z[7]=Array("mda","",3002,3032);
$z[7][4]['name']="250x250_SSP";
$z[8]=Array("arclist","\r\n    <li><a href=\"[field:arcurl/]\">[field:title/]</a></li>\r\n    ",3196,3311);
$z[8][4]['row']="10";
$z[8][4]['orderby']="click";
$z[9]=Array("mda","",3392,3418);
$z[9][4]['name']="250x250";
$z[10]=Array("qrcode","",3426,3440);
$z[11]=Array("mda","",3531,3556);
$z[11][4]['name']="728x90";
$z[12]=Array("include","",3564,3601);
$z[12][4]['filename']="footer.htm";

?>