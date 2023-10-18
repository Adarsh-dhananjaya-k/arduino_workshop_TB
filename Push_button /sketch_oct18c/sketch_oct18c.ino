int button = 2;
int led = 11; 
int buttonState = 0; 

void setup() { 

  pinMode(button,INPUT); 
  pinMode(led, OUTPUT); 
}


void loop() {
  buttonState = digitalRead(button); 

  if (buttonState == HIGH)
    { 	
      digitalWrite(led, HIGH); // turn LED on: 
		} 
  else 
   {
      digitalWrite(led, LOW); // turn LED off: 
    }  
} 
