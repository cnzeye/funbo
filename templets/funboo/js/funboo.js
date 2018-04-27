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
	

	$('.wechatshow').click(function() {                        
		if ($('.sidebar div').first().hasClass('erweima')) {
			$('.sidebar div').first().removeClass('erweima').hide();
			
		} else {
			$('.sidebar div').first().addClass('erweima').show();
			

		}




	});



// 侧栏判断窗口高度大于则显示
$(window).scroll(function(event) {
	if ($(window).scrollTop() > 434) {
		 var speed=600;//动画速度
		 $('.sidebar').css('display','block');
		}else{
			$('.sidebar').css('display','none');
		}
	});


// 回到顶部按钮
$('div .sidebar-listtop').click(function(event) {
			 var speed=600;//滑动的速度
			 $('body,html').animate({ scrollTop: 0 }, speed);
			 return false;
			});



$('.slist li').each(function(index) {
     
		// 服务鼠标滑过效果
		$(this).click(function() {
		 
			$(this).addClass('moren');
			$(this).siblings().removeClass('moren');
		
		});
		$(this).click(function(){
				$('.shide').eq(index).addClass('scontent').siblings().removeClass('scontent');
		})
		
	});


});


// 需求提交弹窗脚本

jQuery(document).ready(function($){
	var $form_modal = $('.cd-user-modal'),
	$form_login = $form_modal.find('#cd-login'),
	$form_signup = $form_modal.find('#cd-signup'),
	$form_modal_tab = $('.cd-switcher'),
	$tab_login = $form_modal_tab.children('li').eq(0).children('a'),
	$tab_signup = $form_modal_tab.children('li').eq(1).children('a'),
	$main_nav = $('.main_nav');

	//µ¯³ö´°¿Ú
	$main_nav.on('click', function(event){

		if( $(event.target).is($main_nav) ) {
			// on mobile open the submenu
			$(this).children('ul').toggleClass('is-visible');
		} else {
			// on mobile close submenu
			$main_nav.children('ul').removeClass('is-visible');
			//show modal layer
			$form_modal.addClass('is-visible');	
			//show the selected form
			( $(event.target).is('.cd-signup') ) ? signup_selected() : login_selected();
		}

	});

	//¹Ø±Õµ¯³ö´°¿Ú
	$('.cd-user-modal').on('click', function(event){
		if( $(event.target).is($form_modal) || $(event.target).is('.cd-close-form') ) {
			$form_modal.removeClass('is-visible');
		}	
	});

	$('.closebar').on('click', function(event){
		
		$form_modal.removeClass('is-visible');

	});
	//Ê¹ÓÃEsc¼ü¹Ø±Õµ¯³ö´°¿Ú
	$(document).keyup(function(event){
		if(event.which=='250'){
			$form_modal.removeClass('is-visible');
		}
	});

	//ÇÐ»»±íµ¥
	$form_modal_tab.on('click', function(event) {
		event.preventDefault();
		// ( $(event.target).is( $tab_login ) ) ? login_selected() : signup_selected();
	});

	function login_selected(){
		$form_login.addClass('is-selected');
		$form_signup.removeClass('is-selected');
		$tab_login.addClass('selected');
		$tab_signup.removeClass('selected');
	}

	// function signup_selected(){
	// 	$form_login.removeClass('is-selected');
	// 	$form_signup.addClass('is-selected');
	// 	$tab_login.removeClass('selected');
	// 	$tab_signup.addClass('selected');
	// }

});


//credits http://css-tricks.com/snippets/jquery/move-cursor-to-end-of-textarea-or-input/
jQuery.fn.putCursorAtEnd = function() {
	return this.each(function() {
    	// If this function exists...
    	if (this.setSelectionRange) {
      		// ... then use it (Doesn't work in IE)
      		// Double the length because Opera is inconsistent about whether a carriage return is one character or two. Sigh.
      		var len = $(this).val().length * 2;
      		this.setSelectionRange(len, len);
      	} else {
    		// ... otherwise replace the contents with itself
    		// (Doesn't work in Google Chrome)
    		$(this).val($(this).val());
    	}
    });
};