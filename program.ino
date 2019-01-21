//-- MOTEUR A --
int ENA=3; //Connecté à Arduino pin 5(sortie pwm)
int IN1=5; //Connecté à Arduino pin 2
int IN2=6; //Connecté à Arduino pin 3

//-- MOTEUR B --
int ENB=11; //Connecté à Arduino pin 6(Sortie pwm)
int IN3=9; //Connecté à Arduino pin 4
int IN4=10; //Connecté à Arduino pin 7

void setup() {
 pinMode(ENA,OUTPUT);//Configurer les broches comme sortie
 pinMode(ENB,OUTPUT);
 pinMode(IN1,OUTPUT);
 pinMode(IN2,OUTPUT);
 pinMode(IN3,OUTPUT);
 pinMode(IN4,OUTPUT);
 digitalWrite(ENA,LOW);// Moteur A - Ne pas tourner (désactivation moteur)
 digitalWrite(ENB,LOW);// Moteur B - Ne pas tourner (désactivation moteur)

 // Direction du Moteur A
 digitalWrite(IN1,LOW); 
 digitalWrite(IN2,HIGH);

 // Direction du Moteur B
 // NB: en sens inverse du moteur A
 digitalWrite(IN3,HIGH);
 digitalWrite(IN4,LOW);
}

void loop() {
  // Moteur A - Plein régime
  analogWrite(ENA,0);
  delay(250);
analogWrite(ENA,50);
delay(250);
analogWrite(ENA,100);
delay(250);
analogWrite(ENA,150);
delay(250);
analogWrite(ENA,200);
delay(250);
analogWrite(ENA,255);

delay(2000);
analogWrite(ENA,0);
delay(3000);

}
