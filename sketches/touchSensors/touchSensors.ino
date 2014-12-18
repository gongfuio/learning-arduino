 
const int touchPin1 = 2;
const int touchPin2 = 4;
const int touchPin3 = 6;
const int touchPin4 = 8;
const int ledPin = 13;

void setup() {
  pinMode( touchPin1, INPUT);
  pinMode( touchPin2, INPUT);
  pinMode( touchPin3, INPUT);
  pinMode( touchPin4, INPUT);
  pinMode( ledPin, OUTPUT);
  Serial.begin( 9600);
} 

void loop() {
  int sensorValue1 = digitalRead( touchPin1);
  int sensorValue2 = digitalRead( touchPin2);
  int sensorValue3 = digitalRead( touchPin3);
  int sensorValue4 = digitalRead( touchPin4);
  int combinedSensorValues = ( sensorValue1 == 1) || ( sensorValue2 == 1)
                              || ( sensorValue3 == 1) || ( sensorValue4 == 1);

  // Serial.println( "Sensor values 1/2/3/4/combined:");
  // Serial.println( sensorValue1);
  // Serial.println( sensorValue2);
  // Serial.println( sensorValue3);
  // Serial.println( sensorValue4);
  // Serial.println( combinedSensorValues);

  if( combinedSensorValues == 1) {
    digitalWrite( ledPin, HIGH);
  } else {
    digitalWrite( ledPin, LOW);
  }
  // delay( 1000);
}
