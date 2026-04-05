// C++ code
int m1a = 9;
int m1b = 8;
int m2a = 7;
int m2b = 6;
bool returning=false;
char path[100];
int index=0;

unsigned long lstime=0;

void setup()
{
  Serial.begin(9600);
  
  pinMode(m1a, OUTPUT);
  pinMode(m1b, OUTPUT);
  pinMode(m2a, OUTPUT);
  pinMode(m2b, OUTPUT);

}

void loop(){
  if(Serial.available()){
    char cmd=Serial.read();
    lstime = millis();
    
    if(cmd=='F'){
      forward();
      delay(2000);
      stopMotors();
      path[index++]='F';
    }
    else if(cmd=='R'){
      right();
      delay(2000);
      stopMotors();
      path[index++]='R';
    }
    else if(cmd=='L'){
      left();
      delay(2000);
      stopMotors();
      path[index++]='L';
    }
    else if(cmd=='S'){
      stopMotors();
    }
  }
  if (millis()-lstime>10000 && index>0 && !returning) {
    Serial.print("\nConnection Lost...\n");
    Serial.print("Retracing path\n");
    returnToBase();
  }
}
void forward() {
  digitalWrite(m1a, HIGH);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, HIGH);
  digitalWrite(m2b, LOW);
  Serial.print("Moving forward(2sec)\n");
}

void left() {
  digitalWrite(m1a, HIGH);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, LOW);
  digitalWrite(m2b, LOW);
  Serial.print("Moving left(2sec)\n");
}

void right() {
  digitalWrite(m1a, LOW);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, HIGH);
  digitalWrite(m2b, LOW);
  Serial.print("Moving right(2sec)\n");
}

void stopMotors() {
  digitalWrite(m1a, LOW);
  digitalWrite(m1b, LOW);
  digitalWrite(m2a, LOW);
  digitalWrite(m2b, LOW);
  Serial.print("Stoping...\n");
}
void returnToBase(){
  returning=true;
  for(int i=index-1;i>=0;i--){
    if(path[i]=='F'){
      digitalWrite(m1a, LOW);
      digitalWrite(m1b, HIGH);
      digitalWrite(m2a, LOW);
      digitalWrite(m2b, HIGH);
      Serial.print("Moving backward(2sec)\n");
      delay(2000);
    }
    else if (path[i] == 'L') {
      right();
      delay(2000);
    }
    else if (path[i] == 'R') {
      left();
      delay(2000);
    }
  }
  stopMotors();
  index=0;
  lstime = millis();
  returning=false;
}