// HOMEWORK: 
// Have each light turn on and off in sequence from left to right then back (For example: https://thumbs.gfycat.com/CarefreeCluelessJoey-size_restricted.gif)
// there is an error in the code! After you set it up, compile the code and try to figure out where to adjust your code for your sequence to be complete
// Add code to Github
// Record a video of your light sequence

int pinArray[] = {2, 3, 4, 5, 6, 7};
int count = 0;


int LED1 = 2;
int LED2 = 3;
int LED3 = 4;
int LED4 = 5;
int LED5 = 6;
int LED6 = 7;


// initialize digital pin LED_BUILTIN as an output.
void setup() {
  
for (count=0;count<7;count++) {
   pinMode(pinArray[count], OUTPUT);
  }
}

// the loop function runs over and over again forever
void loop() {
  
  for(count=0;count<8;count++){
  digitalWrite(count, HIGH);        // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for half a second
  digitalWrite(count, LOW);         // turn the LED off by making the voltage LOW
  /*delay(100);*/                   // wait for half a second
  }
  
  for(count=7;count>=2;count--){
  digitalWrite(count, HIGH);        // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for half a second
  digitalWrite(count, LOW);         // turn the LED off by making the voltage LOW
  /*delay(100);*/                   // wait for half a second
  }
}
