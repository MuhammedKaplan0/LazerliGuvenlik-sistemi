int Kled=10;  //değişkenler ve pinleri
int Yled=12;
int buzzer=11;
int ldr=A4;

void setup(){
  Serial.begin(9600);   
  pinMode(Kled,OUTPUT);   //pinleri çıkış olarak ayarlama
   pinMode(Yled,OUTPUT);
  pinMode(buzzer,OUTPUT);
}

void loop(){

  int ldrdeger=analogRead(ldr);
  Serial.println(ldrdeger);
  if(ldrdeger<500)              // değer 500 den küçük ise 


  {
    digitalWrite(Kled,HIGH);
    digitalWrite(Yled,LOW);       // yeşil ışık söner kırmızı ışık yanar 
    tone(buzzer,30);
    delay(2000);
    noTone (buzzer);        // buzzer belirli aralıklarda öter
    delay(500);
     tone(buzzer,30);
    
  }
  else
  {
     digitalWrite(Kled,LOW);
     digitalWrite(Yled,HIGH);                  //değer 500 den küçük değil ise yeşil ışık yanar kırmızı ışık söner 
     noTone(buzzer);                         //buzzer yanmaz
  }
}
