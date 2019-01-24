

int Av = 1;
int Ar = 2;
int St = 3;
int state = 10; 



void setup() {



Serial.begin(9600);

}

void loop() {


state = Serial.parseInt();

if (state == Av){Serial.println("Avant"); 



}

if (state == Ar){Serial.println("Arriere");



}

if (state == St){Serial.println("Stop"); 

}

delay(1000);
}
