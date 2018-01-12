// In this program we will use the same button to turn on & off the LED

int led = 3;
int button = 7;
int buttonState =0; 

//used for changeState function
int state = 1;
int change= -1;

// function called everytime the button is pushed to change the LED's state
void changeState(){
  change *=-1;    //change var will take values 1 or 0 
  digitalWrite(led, state + change); // when change == 1 (1+1 = 2) led is on, when change ==-1 led is off 
}

void setup() {
  pinMode(led,OUTPUT);
  pinMode(button,INPUT_PULLUP);
  
}

void loop() {
  buttonState = digitalRead(button);
  if (buttonState == LOW){ //when button is pushed
    changeState();
    delay(200);
  }
}
