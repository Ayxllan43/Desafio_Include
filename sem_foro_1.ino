int pinVermelho = 11;
int pinAmarelo = 10;
int pinVerde = 9;
int pedestreVermelho = 6;
int pedestreVerde = 3;
int ledMulta = 5;
int botaoPedestre = 7;
int sensor = 4;
int tempoVerm;
int tempoVerde;
int tempoAmar;


 void setup(){
  Serial.begin(9600);  
  pinMode(pinVermelho, OUTPUT); //semaforo vermelho
  pinMode(pinAmarelo, OUTPUT); //semaforo amarelo
  pinMode(pinVerde, OUTPUT);  //semaforo verde
  pinMode(pedestreVermelho, OUTPUT);  //pedestre vermelho
  pinMode(pedestreVerde, OUTPUT);  // pedestre verde 
  pinMode(sensor, INPUT);
  pinMode(ledMulta, OUTPUT);
  pinMode(botaoPedestre, INPUT);

}

void loop(){
  tempoVerm = 250;
  tempoVerde = 250;
  tempoAmar = 5000;
  
 for(int i = 0; i <60 ; i++){//sinal vermelho trocar pra 60
   if(digitalRead(sensor)){
   	digitalWrite(pinVermelho, HIGH);
    digitalWrite(pedestreVerde, HIGH);
    digitalWrite(ledMulta, HIGH);
   	delay(tempoVerm);
    digitalWrite(pinVermelho, LOW);
    digitalWrite(pedestreVerde, LOW);
    digitalWrite(ledMulta, LOW);
   }else{
    digitalWrite(pinVermelho, HIGH);
    digitalWrite(pedestreVerde, HIGH);
   	delay(tempoVerm);
    digitalWrite(pinVermelho, LOW);
    digitalWrite(pedestreVerde, LOW);
   }
  }
  delay(100);

    for(int i = 0; i < 1; i++){
    digitalWrite(pinAmarelo, HIGH);
    digitalWrite(pedestreVermelho, HIGH);
   	delay(tempoAmar);
    digitalWrite(pinAmarelo, LOW);
    digitalWrite(pedestreVermelho, LOW);
     
  }
  delay(100);
  
  for(int i = 0; i < 40; i++){
  
  	if(digitalRead(botaoPedestre)){
     for(int i = 0; i <60 ; i++){//sinal vermelho trocar pra 60
   if(digitalRead(sensor)){
   	digitalWrite(pinVermelho, HIGH);
    digitalWrite(pedestreVerde, HIGH);
    digitalWrite(ledMulta, HIGH);
   	delay(tempoVerm);
    digitalWrite(pinVermelho, LOW);
    digitalWrite(pedestreVerde, LOW);
    digitalWrite(ledMulta, LOW);
   }else{
    digitalWrite(pinVermelho, HIGH);
    digitalWrite(pedestreVerde, HIGH);
   	delay(tempoVerm);
    digitalWrite(pinVermelho, LOW);
    digitalWrite(pedestreVerde, LOW);
   }
  } break;
  	}else{
      digitalWrite(pinVerde, HIGH);
      digitalWrite(pedestreVermelho, HIGH);
       delay(tempoVerde);
      digitalWrite(pinVerde, LOW);
      digitalWrite(pedestreVermelho, LOW);
    }
  }
   delay(100);
} 
