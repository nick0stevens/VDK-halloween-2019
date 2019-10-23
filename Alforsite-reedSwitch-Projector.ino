
/*
 * 
 * a reed switch with pullup resistor triggers a key press to activate an animation in processing
 */

#include "Keyboard.h"

int reedSwitch =2;
boolean triggered = false;

void setup() {
  // put your setup code here, to run once:
pinMode(reedSwitch, INPUT_PULLUP);
Serial.begin(9600);

 Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:

  if(!digitalRead(reedSwitch)){
    if(!triggered){
    Serial.println("hit");
    Keyboard.write('D');
    triggered = true;
    delay(100);
    }
    }
else{
  triggered = false;
  }
}



