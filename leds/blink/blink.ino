/* Program to make a led blink */

int led = 13 ; //Indicates that the led should be in pin No13


// the setup function runs once when you press reset or power the board
void setup(){
  pinMode(led,OUTPUT);  //Setting pin that our led is connected to output mode 

  
}

// function that runs infinitelly
void loop(){
  
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second (1000ms)
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  
  
}
