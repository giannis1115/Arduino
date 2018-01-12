// In this program we use two buttons ! 
// One to turn the LED on, one to Turn it off

//Indicates where our equipment will be connected
int led = 4;
int buttonOn = 2;
int buttonOff = 8;

// Function to run once:
void setup() {

  //Setting the pins
  pinMode(led,OUTPUT);
  pinMode(buttonOn, INPUT_PULLUP);
  pinMode(buttonOff, INPUT_PULLUP);
}
// Function to run repeatedly:

void loop() {
  //Button to turn on the led
  if(digitalRead(buttonOn)==LOW)
    digitalWrite(led, HIGH);


  //Button to turn off the led
  if(digitalRead(buttonOff)==LOW)
    digitalWrite(led, LOW);
}
