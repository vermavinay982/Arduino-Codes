// IR Obstacle Collision Detection Module
// Henry's Bench

int LED = 9; // Use the onboard Uno LED
int isObstaclePin = 7;  // This is our input pin
int isObstacle = HIGH;  // HIGH MEANS NO OBSTACLE
int brightness=10;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(isObstaclePin, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  isObstacle = digitalRead(isObstaclePin);
  if (isObstacle == HIGH)
  {
    Serial.println("OBSTACLE!!, OBSTACLE!!");
    digitalWrite(LED, HIGH);
  }
  else
  {
    Serial.println("clear");
  analogWrite(LED, brightness);

  }
  Serial.println(isObstacle);
  delay(200);
}
