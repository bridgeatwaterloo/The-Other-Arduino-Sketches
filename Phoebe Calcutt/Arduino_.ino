/*int led = 9;
int brightness = 5;
fadeAmount = 0; */

int pin= 9; 

void setup() 

{
  pinMode(pin, OUTPUT); 
} 

void loop() {

  digitalWrite(pin,HIGH); 
  delay (1000);
  digitalWrite (pin,LOW);
  delay(1000);
}
  
/*  digitalWrite(led,0);
  
  brightness = 0 + 5;



brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ;
  }*/
 

  
