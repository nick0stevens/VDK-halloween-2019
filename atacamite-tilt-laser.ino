/*
 * tilt switch with pull up on pin 2
 * 
 * laser on pin 6
 * 
 * laser switches on when tilt switch tilted
 */

int tiltSwitch = 2;
int laser = 6;

void setup() {
  // put your setup code here, to run once:
pinMode(tiltSwitch, INPUT_PULLUP);
pinMode(laser,OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(laser,digitalRead(tiltSwitch));



}
