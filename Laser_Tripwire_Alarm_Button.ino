int Kled=10;
int Yled=12;
int buzzer=11;
int ldr=A4;

void setup(){
  Serial.begin(9600);
  pinMode(Kled,OUTPUT);
   pinMode(Yled,OUTPUT);
  pinMode(buzzer,OUTPUT);
}

void loop(){

  int ldrdeger=analogRead(ldr);
  Serial.println(ldrdeger);
  if(ldrdeger<500)

  {
    digitalWrite(Kled,HIGH);
    digitalWrite(Yled,LOW);
    tone(buzzer,30);
    delay(2000);
    noTone (buzzer);
    delay(500);
     tone(buzzer,30);
    
  }
  else
  {
     digitalWrite(Kled,LOW);
     digitalWrite(Yled,HIGH);
     noTone(buzzer);
  }
}
