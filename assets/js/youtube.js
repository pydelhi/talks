// Asynchronously load the YouTube API
var tag = document.createElement('script');
tag.src = 'https://www.youtube.com/iframe_api';
var firstScriptTag = document.getElementsByTagName('script')[0];
firstScriptTag.parentNode.insertBefore(tag, firstScriptTag);

// Creates an <iframe> (and YouTube player) after the YouTube API is loaded
var player;
function onYouTubeIframeAPIReady() {
    player = new YT.Player('player', {
        height: calculatePlayerHeight().toString(),
        width: '100%',
        videoId: null
    });

    $(window).resize(function() {
        var newPlayerHeight = calculatePlayerHeight();
        player.setSize('100%', newPlayerHeight);
    });
}
