int dugme=2;
int yesil=3;
int sari=4;
int kirmizi=5;
void setup() {
pinMode(dugme,INPUT);
pinMode(yesil,OUTPUT);
pinMode(sari,OUTPUT);
pinMode(kirmizi,OUTPUT);
}

void loop() {
  if
  (digitalRead(dugme)==HIGH)
{
  digitalWrite(yesil,HIGH);
  digitalWrite(sari,HIGH);
  digitalWrite(kirmizi,HIGH);
}
else
{
  digitalWrite(yesil,LOW);
  digitalWrite(sari,LOW);
  digitalWrite(kirmizi,LOW);
}
delay(10);
}
