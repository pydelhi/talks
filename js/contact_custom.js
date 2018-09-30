/* JS Document */

/******************************

[Table of Contents]

1. Vars and Inits
2. Set Header
3. Initialize Hamburger
4. Init Parallax
5. Init Google Map
6. Init Search


******************************/

$(document).ready(function()
{
	"use strict";

	/* 

	1. Vars and Inits

	*/

	var header = $('.header');
	var hamb = $('.hamburger');
	var hambActive = false;
	var menuActive = false;
	var ctrl = new ScrollMagic.Controller();
	var map;

	setHeader();

	$(window).on('resize', function()
	{
		setHeader();
	});

	$(document).on('scroll', function()
	{
		setHeader();
	});

	initHamburger();
	initParallax();
	initGoogleMap();
	initSearch();

	/* 

	2. Set Header

	*/

	function setHeader()
	{
		if(window.innerWidth < 992)
		{
			if($(window).scrollTop() > 100)
			{
				header.addClass('scrolled');
			}
			else
			{
				header.removeClass('scrolled');
			}
		}
		else
		{
			if($(window).scrollTop() > 100)
			{
				header.addClass('scrolled');
			}
			else
			{
				header.removeClass('scrolled');
			}
		}
		if(window.innerWidth > 991 && menuActive)
		{
			closeMenu();
		}
	}

	/* 

	3. Initialize Hamburger

	*/

	function initHamburger()
	{
		if($('.hamburger').length)
		{
			hamb.on('click', function(event)
			{
				event.stopPropagation();

				if(!menuActive)
				{
					openMenu();
					
					$(document).one('click', function cls(e)
					{
						if($(e.target).hasClass('menu_mm'))
						{
							$(document).one('click', cls);
						}
						else
						{
							closeMenu();
						}
					});
				}
				else
				{
					$('.menu_container').removeClass('active');
					menuActive = false;
				}
			});
		}
	}

	function openMenu()
	{
		var fs = $('.menu_container');
		fs.addClass('active');
		hambActive = true;
		menuActive = true;
	}

	function closeMenu()
	{
		var fs = $('.menu_container');
		fs.removeClass('active');
		hambActive = false;
		menuActive = false;
	}

	/* 

	4. Init Parallax

	*/

	function initParallax()
	{
		// Add parallax effect to every element with class prlx
		// Add class prlx_parent to the parent of the element
		if($('.prlx_parent').length && $('.prlx').length)
		{
			var elements = $('.prlx_parent');

			elements.each(function()
			{
				var ele = this;
				var bcg = $(ele).find('.prlx');

				var slideParallaxScene = new ScrollMagic.Scene({
			        triggerElement: ele,
			        triggerHook: 1,
			        duration: "200%"
			    })
			    .setTween(TweenMax.from(bcg, 1, {y: '-30%', ease:Power0.easeNone}))
			    .addTo(ctrl);
			});
		}
	}

	/* 

	5. Init Google Map

	*/

	function initGoogleMap()
	{
		var myLatlng = new google.maps.LatLng(34.043238,-118.258338);
    	var mapOptions = 
    	{
    		center: myLatlng,
	       	zoom: 13,
			mapTypeId: google.maps.MapTypeId.ROADMAP,
			draggable: true,
			scrollwheel: false,
			zoomControl: true,
			zoomControlOptions:
			{
				position: google.maps.ControlPosition.RIGHT_CENTER
			},
			mapTypeControl: false,
			scaleControl: false,
			streetViewControl: false,
			rotateControl: false,
			fullscreenControl: true,
			styles:[]
    	}

    	// Initialize a map with options
    	map = new google.maps.Map(document.getElementById('map'), mapOptions);
    	map.panBy(0, 0);

    	// Use an image for a marker
		// var image = 'images/map_marker.png';
		var image = 
		{
			url:'images/marker.png',
			size: new google.maps.Size(230, 150),
			anchor: new google.maps.Point(206, 125) //setting the anchor for larger icons
		};

		var imageSmall =
		{
			url:'images/dot.png',
			size: new google.maps.Size(54, 54),
			anchor: new google.maps.Point(27, 27) //setting the anchor for larger icons
		};

		var marker = new google.maps.Marker(
		{
			position: new google.maps.LatLng(34.043238,-118.258338),
			map: map
		});

		if($(window).width() < 720)
    	{
    		marker.setIcon(imageSmall);
    	}
    	else
    	{
    		map.panBy(75, 0);
    		marker.setIcon(image);
    	}

		// Re-center map after window resize
		google.maps.event.addDomListener(window, 'resize', function()
		{
			setTimeout(function()
			{
				google.maps.event.trigger(map, "resize");
				map.setCenter(myLatlng);
				if($(window).width() < 720)
		    	{
		    		marker.setIcon(imageSmall);
		    	}
		    	else
		    	{
		    		map.panBy(75, 0);
		    		marker.setIcon(image);
		    	}
			}, 1400);
		});
	}

	/* 

	6. Init Search

	*/

	function initSearch()
	{
		if($('.search').length)
		{
			var search = $('.search');
			search.on('click', function(e)
			{
				var target = $(e.target);
				if(!target.hasClass('ctrl_class'))
				{
					$(this).toggleClass('active');
				}
			});
		}
	}
});