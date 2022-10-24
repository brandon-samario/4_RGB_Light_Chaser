/*
  RGB Light Chaser
  Turns on RGB LED, using high and low to set which pin or colour to be activiated on the RGB LED
  On for 1 second, then off for 1 second using an integer to set delay for each function
  Use pinMode to set pins as outputs, and use digital write to set state of outputs of RGB LED
  Setting function of RGB LED can either be set to high or low for each pin determining the colour to be shown on RGB LED
  Use serial begin to start serial monitoring, and use serial.print or serial.println to print value
*/

//set pin numbers
const int BLUE = 3; // set pin 3 as blue
const int GREEN = 5; // set pin 5 as green
const int RED = 6; // set pin 6 as red
int wait_time= 1000; // set value for delay

// the setup function runs once when you press reset or power the board
void setup() {
Serial.begin(9600); // start serial connection
pinMode(RED, OUTPUT); // setting red (pin 6) as output (RGB LED)
pinMode(GREEN, OUTPUT); // setting green (pin 5) as output (RGB LED)
pinMode(BLUE, OUTPUT); // setting blue (pin 3) as output (RGB LED)
}

// the loop function runs over and over again forever
void loop() {
digitalWrite(BLUE, 0); // set to 0 turning off the pin or colour on the RGB LED
digitalWrite(GREEN, 0); // set to 0 turning off the pin or colour on the RGB LED
digitalWrite(RED, HIGH); // set to high turning on the pin or colour on the RGB LED
delay(wait_time); // wait time
Serial.print("Colour Mode = "); // print outs represetnation of value 
Serial.println("RED"); // print value

digitalWrite(BLUE, 0); // set to 0 turning off the pin or colour on the RGB LED
digitalWrite(GREEN, HIGH); // set to high turning on the pin or colour on the RGB LED
digitalWrite(RED, 0); // set to 0 turning off the pin or colour on the RGB LED
delay(wait_time); // wait time
Serial.print("Colour Mode = "); // print outs represetnation of value 
Serial.println("GREEN"); // print value
  
digitalWrite(BLUE, HIGH); // set to high turning on the pin or colour on the RGB LED
digitalWrite(GREEN, 0); // set to 0 turning off the pin or colour on the RGB LED
digitalWrite(RED, 0); // set to 0 turning off the pin or colour on the RGB LED
delay(wait_time); // wait time
Serial.print("Colour Mode = "); // print outs represetnation of value 
Serial.println("BLUE"); // print value

digitalWrite(BLUE, 0); // set to 0 turning off the pin or colour on the RGB LED
digitalWrite(GREEN, HIGH); // set to high turning on the pin or colour on the RGB LED
digitalWrite(RED, 0); // set to 0 turning off the pin or colour on the RGB LED
delay(wait_time); // wait time
Serial.print("Colour Mode = "); // print outs represetnation of value 
Serial.println("GREEN"); // print value
}
