// C++ code
unsigned long startime=0;
unsigned long reactiontime=0;
void setup()
{
  pinMode(8,OUTPUT);
  pinMode(2,INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("Get Ready...");
}

void loop()
{
  delay(random(2000,5000));
  digitalWrite(8,HIGH);
  startime=millis();
  
  while(digitalRead(2)==HIGH){
    //waiting....
  }
  reactiontime=millis()-startime;
  
  Serial.print("Reaction time=");
  Serial.print(reactiontime);
  Serial.println("ms");
  
  digitalWrite(8,LOW);
  
  delay(2000);
  Serial.println("Get Ready...");
  
}
  
  