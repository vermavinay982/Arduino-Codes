/*
  Analog Input
 Demonstrates analog input by reading an analog sensor on analog pin 0 and
 turning on and off a light emitting diode(LED)  connected to digital pin 13.
 The amount of time the LED will be on and off depends on
 the value obtained by analogRead().

 The circuit:
 * Potentiometer attached to analog input 0
 * center pin of the potentiometer to the analog pin
 * one side pin (either one) to ground
 * the other side pin to +5V
 * LED anode (long leg) attached to digital output 13
 * LED cathode (short leg) attached to ground

 * Note: because most Arduinos have a built-in LED attached
 to pin 13 on the board, the LED is optional.


 Created by David Cuartielles
 modified 30 Aug 2011
 By Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/AnalogInput

 */int led = 9;           // the PWM pin the LED is attached to
int brightness = 0; 

int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);  Serial.begin(9600);
}

void loop() {
   brightness = 0;
   int fadeAmount=sensorValue;
  // read the value from the sensor:
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue); delay(2);
//  // turn the ledPin on
//  digitalWrite(ledPin, HIGH);
//  // stop the program for <sensorValue> milliseconds:
//  delay(sensorValue);
//  // turn the ledPin off:
//  digitalWrite(ledPin, LOW);
//  // stop the program for for <sensorValue> milliseconds:
//  delay(sensorValue);
if(sensorValue>255)
fadeAmount=230;
  brightness = brightness + fadeAmount;  analogWrite(led, brightness);
  delay(30);}
