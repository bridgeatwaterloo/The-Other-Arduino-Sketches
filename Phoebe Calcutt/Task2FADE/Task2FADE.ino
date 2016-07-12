/*This sketch meets the Acceptance criteria of this task: https://trello.com/c/OvXraD7u/1-fade-an-led-in-and-out */

  int pin= 13; /*declare pin*/ 
  int fadeAmount= 50;
  int brightness= 0;

   void setup() {

  pinMode (13, OUTPUT);

  }

/* this function runs untill you press off*/ 
  void loop() {

  analogWrite(13, 30);/*light on*/ 
  
  brightness = brightness + fadeAmount;

  if (brightness == 0 || brightness == 255) 
    fadeAmount = -fadeAmount;
  delay(400);/*milliseconds*/
  
  }









  


