
int motorPin1 = 5;
int motorPin2 = 6;
int motorPin3 = 9;
int motorPin4 = 10;
int ENA=3;
int ENB=11;
int Turn1 = 1;
int Turn2 = 2;
int state = 10; 

void setup() {

pinMode(ENA,OUTPUT);
pinMode(ENB,OUTPUT);
pinMode(motorPin1, OUTPUT);
pinMode(motorPin2, OUTPUT);
pinMode(motorPin3, OUTPUT);
pinMode(motorPin4, OUTPUT);
Serial.begin(9600);
digitalWrite(ENA,LOW);
digitalWrite(ENB,LOW);

}

void loop() {

state = Serial.parseInt();

if (state == Turn1){Serial.println("Tourner sens 1"); 

digitalWrite(motorPin1, HIGH); 
digitalWrite(motorPin2, LOW);
digitalWrite(motorPin3, HIGH); 
digitalWrite(motorPin4, LOW);

analogWrite(ENA,100);
analogWrite(ENB,100);
analogWrite(ENA,125);
analogWrite(ENB,125);
analogWrite(ENA,150);
analogWrite(ENB,150);
analogWrite(ENA,175);
analogWrite(ENB,175);
analogWrite(ENA,200);
analogWrite(ENB,200);
analogWrite(ENA,225);
analogWrite(ENB,225);
analogWrite(ENA,250);
analogWrite(ENB,250);

delay(150);

digitalWrite(motorPin1, LOW); 
digitalWrite(motorPin2, LOW);
digitalWrite(motorPin3, LOW); 
digitalWrite(motorPin4, LOW);
}

if (state == Turn2){Serial.println("Tourner sens 2");

digitalWrite(motorPin1, LOW); 
digitalWrite(motorPin2, HIGH);
digitalWrite(motorPin3, LOW); 
digitalWrite(motorPin4, HIGH);

analogWrite(ENA,100);
analogWrite(ENB,100);
analogWrite(ENA,125);
analogWrite(ENB,125);
analogWrite(ENA,150);
analogWrite(ENB,150);
analogWrite(ENA,175);
analogWrite(ENB,175);
analogWrite(ENA,200);
analogWrite(ENB,200);
analogWrite(ENA,225);
analogWrite(ENB,225);
analogWrite(ENA,250);
analogWrite(ENB,250);

delay(150);

digitalWrite(motorPin1, LOW); 
digitalWrite(motorPin2, LOW);
digitalWrite(motorPin3, LOW); 
digitalWrite(motorPin4, LOW);

}
}
