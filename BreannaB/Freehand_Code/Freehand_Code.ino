

//sort of like a key that allows you to use just the 'int' name insted of the number. 
//Making it easier if you have more than one function 

int led = 6;
int brightness = 0;
int fadeAmount = 5;


//void will run when reset
void setup () {
  pinMode(led, OUTPUT);
  
}

//this will repeat the void setup
void loop () {
 analogWrite(led, HIGH); //turns the LED to HIGH
 //delay in milliseconds
 delay(13);
 analogWrite(led, LOW); //turns the LED to LOW
   //delay in milliseconds
 delay(13);
}

//changes the direstion of the fade, resulting in a fade out
  if (brightness <= 0 || brightness >= 255);
//changes 
  fadeAmount = - fadeAmount;
