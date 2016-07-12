/*this sketch meets the Acceptance Criteria*/

int pin = 9;
int shine = 0;
int fadeAmount = 5.9;
int flashon = 158;
int flashoff = 150;
/*setup used the run once*/
 void setup() {
 
 /*LED pin stored as a variable*/
 pinMode(pin, OUTPUT);
}

/*used for a repeated routine*/
void loop() {
 
/*intensifies the voltage to pin 9*/
analogWrite(pin, shine);

/*changes the brightness for the next loop*/
shine = shine + fadeAmount;

/*fade goes backwards fading at the end*/
if (shine <= 0 || shine >= 255) {
  fadeAmount = -fadeAmount ;
}

/*wait for 15 milliseconds to see the blink effect off*/
delay(flashon);
}


