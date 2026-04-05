// C++ code
unsigned long prevtime=0;
void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(6,OUTPUT);
}

void loop()
{
  int r,g,b=0;
  int pval=analogRead(A0);
  int delaytime=map(pval,0,1023,0,3000);
  if(pval<341){
    r=map(pval,0,340,255,0);
    g=map(pval,0,340,0,255);
    b=0;
  }
  else if (pval < 682) {
    r = 0;
    g = map(pval,341,681,255,0);
    b = map(pval,341,681,0,255);
  }
  else {
    r = map(pval,682,1023,0,255);
    g = 0;
    b = map(pval,682,1023,255,0);
  }
  
  
  analogWrite(9,r);
  analogWrite(10,g);
  analogWrite(11,b);
  
  if(millis()-prevtime>=delaytime){
    prevtime=millis();
    digitalWrite(6,!digitalRead(6));
  }
    
}