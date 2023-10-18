const int irSensorPin = 2; // Define the Arduino pin connected to the IR sensor
int obstacleDetected = 0; // Variable to store detection status (0 or 1)

void setup(){

  pinMode(irSensorPin, INPUT); // Set the IR sensor pin as an input
  Serial.begin(9600); // Initialize serial communication for debugging
}
void loop() {

  obstacleDetected = digitalRead(irSensorPin); // Read the IR sensor

  if (obstacleDetected == LOW) 
  {
    Serial.println("Obstacle Detected!"); // Print a message when an obstacle is detected
  } 

  else {
    Serial.println("No Obstacle"); // Print a message when no obstacle is detected
   }

  delay(1000); // Delay for 1 second before reading the sensor again
}


