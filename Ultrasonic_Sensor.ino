#include <NewPing.h>

const int trigPin = 10;
const int echoPin = 9;
const int max_cm_distance = 300; // three meters


NewPing sonar(trigPin, echoPin, max_cm_distance);

long distance;

void setup() {
  Serial.begin(9600);
}

void loop() {  

  // get the distance in centimeters
  distance = sonar.ping_cm();

  Serial.print("Distance: ");
  Serial.println(distance);

  delay(1000);
  
}
