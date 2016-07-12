/* This sketch meets the acceptance criteria of this task: https://trello.com/c/N8ml0RLg/10-blink-an-led */

void setup() {
  pinMode(9,OUTPUT);
}
/* This is the setup of my blink program */

void loop()  { 
  digitalWrite(9, HIGH);
  delay(100);
  digitalWrite(9,LOW);
  delay(1000);
}
/* This is a code of my light turning on and off. */
