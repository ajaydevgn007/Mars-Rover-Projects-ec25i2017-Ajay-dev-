// C++ code
unsigned long prev1=0;
unsigned long prev2=0;
unsigned long prev3=0;

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
 
}

void loop()
{
  unsigned long current=millis();
  if(current-prev1>=500){
    prev1=current;
    digitalWrite(8,!digitalRead(8));
  }
  if(current-prev2>=1000){
    prev2=current;
    digitalWrite(9,!digitalRead(9));
  }
  if(current-prev3>=1500){
    prev3=current;
    digitalWrite(10,!digitalRead(10));
  }
  
  
}