/*
 * 
 *this sketch reads light sensor on pin A0
 *
 *and turns on a relay( pin 6) when the value falls below a threshold
 */

int lightSensorPin = 0;
int threshold = 600;
int lightValue;
int relayPin = 6;



void setup() {
  // put your setup code here, to run once:
  pinMode(relayPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
lightValue = analogRead(lightSensorPin);

if( lightValue<threshold){
  digitalWrite(relayPin, HIGH);
  }
  else{
     digitalWrite(relayPin, LOW); 
    }
}
