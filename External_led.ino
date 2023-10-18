int LED=5; 
void setup() 
{ 
Serial.begin(9600); //set the baud rate 
pinMode(LED, OUTPUT); // Declare the mode of pin
 Serial.println(“LED Blink‘’); 
} 
void loop()
 { digitalWrite(LED, HIGH);// make the LED pin high 
delay(3000); //delay of 3000 milliseconds 
digitalWrite(LED, LOW); //make the LED pin low
 delay(3000); 
}
