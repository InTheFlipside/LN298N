int motorPin1 = 5;
int motorPin2 = 6;
int motorPin3 = 9;
int motorPin4 = 10;
int ENA=3;
int ENB=11;
int Av = 1;
int Ar = 2;
int St = 3;
int Tu = 4;
int state = 10; 
const int fourchePin = 13;
const int ledPin =  9;
int EtatFourche = 0 ;
int verif;
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
pinMode(ledPin, OUTPUT);     //LED en sortie
pinMode(fourchePin, INPUT);  //en entrée
Serial.println("Fourche optique - detection de presence");
}

void loop() {


if (verif > 19) { verif = 0; } 



state = Serial.parseInt();


if (state == Av){Serial.println("Avant"); 

if (EtatFourche == HIGH) { 


      verif = verif++;
      Serial.println(verif);
      
    // Allumer la LED témoin
    digitalWrite(ledPin, HIGH);
     Serial.println("ALLUME!!!!!");
     }
  if (EtatFourche == LOW) {
    digitalWrite(ledPin, LOW);
    Serial.println("ETEINT!!!!!");
    
  }

{
  EtatFourche = digitalRead(fourchePin);
  Serial.print("Etat");
  
if (EtatFourche < 20) {
EtatFourche=EtatFourche++;
Serial.println("EtatFourche");  
}

else {
if (EtatFourche = 20) {
digitalWrite(motorPin1, LOW); 
digitalWrite(motorPin2, LOW);
digitalWrite(motorPin3, LOW); 
digitalWrite(motorPin4, LOW);
}
}

digitalWrite(motorPin1, HIGH); 
digitalWrite(motorPin2, LOW);
digitalWrite(motorPin3, LOW); 
digitalWrite(motorPin4, HIGH);

analogWrite(ENA,60);
analogWrite(ENB,60);


/*analogWrite(ENA,125);
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

digitalWrite(motorPin1, LOW); 
digitalWrite(motorPin2, LOW);
digitalWrite(motorPin3, LOW); 
digitalWrite(motorPin4, LOW);*/


}
}

if (state == Ar){Serial.println("Arriere");

digitalWrite(motorPin1, LOW); 
digitalWrite(motorPin2, HIGH);
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

delay(4000);

digitalWrite(motorPin1, LOW); 
digitalWrite(motorPin2, LOW);
digitalWrite(motorPin3, LOW); 
digitalWrite(motorPin4, LOW);

}


if (state == St){Serial.println("Stop"); 

digitalWrite(motorPin1, LOW); 
digitalWrite(motorPin2, LOW);
digitalWrite(motorPin3, LOW); 
digitalWrite(motorPin4, LOW);

}

if (state == Tu) {Serial.println("Turn");

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

delay(4000);

digitalWrite(motorPin1, LOW); 
digitalWrite(motorPin2, LOW);
digitalWrite(motorPin3, LOW); 
digitalWrite(motorPin4, LOW);

}
if (verif > 19) {

Serial.println ("VerifActivé!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
  
}

}
