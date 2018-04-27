/*方博互动专属,应用在banner的效果*/

$(document).ready(function(){

	$('.swiper-slide-box').find('h1').eq(0).css('background-color','#5c60b8');
	$('.swiper-slide-box').find('h1').eq(1).css('background-color','#5cb8a6');
	$('.swiper-slide-box').find('h1').eq(2).css('background-color','#5c60b8');
	$('.swiper-slide-box').find('h1').eq(3).css('background-color','#5cb8a6');
	$('.swiper-slide-box').find('h1').eq(4).css('background-color','#5c60b8');
	$('.swiper-slide-box').find('h1').eq(5).css('background-color','#5cb8a6');
	/*鼠标滑过li效果*/
	$('li.list-group-item').mouseover(function(){
		$(this).css('background-color','#5cb8a6');
		$(this).find('a').css('color','white');
	})
	$('li.list-group-item').mouseout(function(){
		$(this).css('background-color','rgba(84, 84, 84, 0.3)');
		$(this).find('a').css('color','#c0c0c0');
	})
	/*提示信息*/
	$('.swiper-container').mouseover(function(){
		$('#sh').css('display','block');
	})
	$('.swiper-container').mouseout(function(){
		$('#sh').css('display','none');
	})
	

});
