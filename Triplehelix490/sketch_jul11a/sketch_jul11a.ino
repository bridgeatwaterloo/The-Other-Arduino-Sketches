
int pin = 9;
int brightness = 0;
int fadeAmount = 5;
int timeOn = 104;
int timeOff = 100;

//setup code: 
void setup() {
    pinMode(pin, OUTPUT);
}
  
//main code

void loop (){

    digitalWrite(pin, HIGH);
      delay(timeOn);
        digitalWrite(pin, LOW);
          delay(timeOff);


}

