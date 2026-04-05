//Smart-Servo-Password-Lock
//AJAY DEV.K.H(EC25I2017)
#include <Keypad.h>
#include <Servo.h>

Servo servo;
const byte rows=4;
const byte columns=4;

char Key[rows][columns] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[rows] = {9, 8, 7, 6};
byte colPins[columns] = {5, 4, 3, 2};

Keypad keypad=Keypad(makeKeymap(Key),rowPins,colPins,rows,columns);

String password="117";
String input="";

void setup()
{
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
  digitalWrite(11,HIGH);
  servo.attach(10);
  servo.write(0);
}

void loop()
{
  char key=keypad.getKey();
  if(key){
    if(key=='*'){
      if(input==password){
        digitalWrite(12,HIGH);
        digitalWrite(11,LOW);
        servo.write(180);
      }
      else{
        digitalWrite(12,LOW);
        digitalWrite(11,HIGH);
        servo.write(0);
      }
      input="";
    }
    else if(key=='#'){
      input="";
    }
    else{
      input+=key;
    }
  }
  
}