/* This sketch meets the acceptance criteria of of this task https://trello.com/c/OvXraD7u/1-fade-an-led-in-and-out */

int led = 9;          /* The pin the LED is connected to           */
int brightness = 0;   /* The brightness of the LED                 */
int fadeAmount = 5;   /* The value in which the LED should fade by */

/* These are the values for these variables */

void setup() {
  pinMode(led, OUTPUT);
}

/* This is the setup for the LED and what it is doing */

void loop() {
  analogWrite(led, brightness);
  /* This is the initial brightness of the LED */
  
  brightness = brightness + fadeAmount;
  /* This is loop that increases the brightness */
  
  if (brightness <= 0 || brightness >= 255){
    fadeAmount = -fadeAmount;
    }
  /* This is the logic that decides whether the brightness should increase or decrease after a certain criteria is met */
  
  delay(20);
  /* This is the delay of the fading at 20ms */
}

