
int pin = 6;
int brightness=0;
int fadeamount=5;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  blink();
  analogWrite(pin,brightness);
}
void blink(){
    if(brightness == 0){
          brightness=255;
      }else{
        brightness=0;
        }
        delay(100);
  }

 void fade(){
      brightness=brightness+fadeamount;

      if(brightness<=0||brightness>=255){
          fadeamount= -fadeamount;
        }
        delay(20);
  }

  

