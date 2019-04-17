void setup() {
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
digitalWrite(8, HIGH);  //led verde acende 
delay(5000);  //fica 2 segundos aceso 
digitalWrite(8, LOW);  //led verde apaga
digitalWrite(9, HIGH);  //led amarelo acende
delay(2500);  //fica 1 segundo aceso
digitalWrite(9, LOW);  //led amarelo apaga
digitalWrite(10, HIGH);  //led vermelho acende
delay(5000);  //fica 2 segundos aceso
digitalWrite(10, LOW);  //led vermelho apaga
  
}
