
int led= 13; /* declare pin */
int brightness= 0;
int fadeAmount= 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(13, brightness);
  brightness = brightness + 3;
  delay(50);
}
