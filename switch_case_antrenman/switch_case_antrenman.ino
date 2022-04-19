int dugme=2;
int yesil_led=3;
int sari_led=4;
int mavi_led=5;
int kirmizi_led=6;
int numara=0;
void setup() {
  Serial.begin(9600);
  pinMode(dugme,INPUT);
  pinMode(yesil_led,OUTPUT);
  pinMode(sari_led,OUTPUT);
  pinMode(mavi_led,OUTPUT);
  pinMode(kirmizi_led,OUTPUT);
  randomSeed(analogRead(A0));
}

void loop() {
  if(digitalRead(dugme)==HIGH)
  {
    numara = random(3,7);
    Serial.println(numara);
    switch (numara)
    {
      case 3:
      Serial.println(":YESİL");
      digitalWrite(yesil_led,HIGH);
      digitalWrite(sari_led,LOW);
      digitalWrite(mavi_led,LOW);
      digitalWrite(kirmizi_led,LOW);
      break;

      case 4:
      Serial.println(":SARİ");
      digitalWrite(yesil_led,LOW);
      digitalWrite(sari_led,HIGH);
      digitalWrite(mavi_led,LOW);
      digitalWrite(kirmizi_led,LOW);
      break;

      case 5:
      Serial.println(":MAVİ");
      digitalWrite(yesil_led,LOW);
      digitalWrite(sari_led,LOW);
      digitalWrite(mavi_led,HIGH);
      digitalWrite(kirmizi_led,LOW);
      break;

      case 6:
      Serial.println(":KİRMİZİ");
      digitalWrite(yesil_led,LOW);
      digitalWrite(sari_led,LOW);
      digitalWrite(mavi_led,LOW);
      digitalWrite(kirmizi_led,HIGH);
      break;

      delay(250);
    }
  }

}
