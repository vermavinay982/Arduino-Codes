/*
  Analog Input
 Demonstrates analog input by reading an analog sensor on analog pin 0 and
 turning on and off a light emitting diode(LED)  connected to digital pin 13.
 The amount of time the LED will be on and off depends on
 the value obtained by analogRead().

 The circuit:
 * Potentiometer attached to analog input 0 IR SENSOR CONNECTED
 * center pin of the potentiometer to the analog pin
 * one side pin (either one) to ground
 * the other side pin to +5V
 * LED anode (long leg) attached to digital output 13
 * LED cathode (short leg) attached to ground

 * Note: because most Arduinos have a built-in LED attached
 to pin 13 on the board, the LED is optional.


 Created by VINAY vERMA
 modified 25 june 2017

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/AnalogInput

 */

int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {static int c=0; sensorValue = analogRead(sensorPin);
   //Serial.println(sensorValue);delay(1); 
  // read the value from the sensor:
 
  // turn the ledPin on
  if(sensorValue>300)
  {digitalWrite(ledPin, HIGH);
  c++;
  
  Serial.print(c);Serial.println(" = Counter");}
  // stop the program for <sensorValue> milliseconds:
  // turn the ledPin off:
if(sensorValue==0)
  digitalWrite(ledPin, LOW);
  // stop the program for for <sensorValue> milliseconds:
 // delay(sensorValue);
}
