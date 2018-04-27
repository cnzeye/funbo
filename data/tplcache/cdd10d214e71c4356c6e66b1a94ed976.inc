<section class="swiper-container hidden-sm hidden-xs">
	
	<div class="swiper-wrapper">
		{dede:channelArtlist typeid='1'}
		<div class="swiper-slide">
			<div class="swiper-slide-box">
			{dede:type}
			<h1>[field:typename/]</h1>
			<h5>[field:description/]</h5>
			{/dede:type}
			<!-- 子栏目 -->
			<ul class="list-group">
				{dede:channel type='son'}
				<li class="list-group-item"><a href='[field:typelink /]'>[field:typename/]</a></li>
				{/dede:channel}
			</ul>
			</div>
		</div>
		{/dede:channelArtlist}


	</div>

	<!-- Add Pagination -->
	<div class="swiper-pagination"></div>
</section>