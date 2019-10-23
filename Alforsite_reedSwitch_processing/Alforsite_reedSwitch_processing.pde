/**
 * Reverse playback example.
 *
 * The Movie.speed() method allows to change the playback speed. 
 * Use negative values for backwards playback. Note that not all 
 * video formats support backwards playback. This depends on the 
 * underlying gstreamer plugins used by gsvideo. For example, the 
 * theora codec does support backward playback, but not so the H264 
 * codec, at least in its current version.
 * 
 */

import processing.video.*;

Movie mov;
boolean speedSet = false;
boolean once = true;

void setup() {
  size(640, 360);
  background(0);
  mov = new Movie(this, "transit.mkv");
  //mov.play();
}

void movieEvent(Movie m) {
  m.read();  
  if (speedSet == true) {
    speedSet = false;
  }
}

void draw() {

  
  image(mov, 0, 0, width, height);
}   


void keyPressed()
{
  
  if(key == 'D') {
  mov.play();
  }
}
