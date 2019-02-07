//Developer:  Daan de Dios
//Date:       2019-02-07
//function:   Spaceship Interface


//----------------------global vars---------------------------------
int switchState = 0;


//setup runs once, when the Arduino is first oiwerd on.
void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);  
}

//loop runs continuously after the setup() has completed.
void loop() {
  //get the switchState from pin 2
  switchState = digitalRead(2);

  if (switchState == LOW){
    digitalWrite(3, HIGH); //green LED
    digitalWrite(4, LOW);  //red LED
    digitalWrite(5, LOW);  //red LED
  }

  else {
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);

    delay(200);

    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    
    delay(250);
  }
}