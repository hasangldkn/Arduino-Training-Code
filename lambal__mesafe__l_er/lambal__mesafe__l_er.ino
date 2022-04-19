int trigPin=9,echoPin=10;
int kirmizi=6,sari=5;
int yesil=4,ssari=3,yyesil=2;
long sure,uzaklik;

void setup() {
  pinMode(trigPin,OUTPUT);pinMode(echoPin,INPUT);
  pinMode(kirmizi,OUTPUT);pinMode(sari,OUTPUT);
  pinMode(yesil,OUTPUT);pinMode(ssari,OUTPUT);
  pinMode(yyesil,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  sure=pulseIn(echoPin,HIGH);
  uzaklik=(sure/2)*0.0343;
  Serial.print("Mesafe:");
  Serial.print(uzaklik);
  Serial.println(" CM");

  if (uzaklik<=10)
  {
    digitalWrite(kirmizi,HIGH);
    digitalWrite(sari,LOW);
    digitalWrite(yesil,LOW);
    digitalWrite(ssari,LOW);
    digitalWrite(yyesil,LOW);
  }
  else if (uzaklik<=20)
  {
    digitalWrite(kirmizi,LOW);
    digitalWrite(sari,HIGH);
    digitalWrite(yesil,LOW);
    digitalWrite(ssari,LOW);
    digitalWrite(yyesil,LOW);
  }
  else if (uzaklik<=30)
  {
    digitalWrite(kirmizi,LOW);
    digitalWrite(sari,LOW);
    digitalWrite(yesil,HIGH);
    digitalWrite(ssari,LOW);
    digitalWrite(yyesil,LOW);
  }
  else if (uzaklik<=40)
  {
    digitalWrite(kirmizi,LOW);
    digitalWrite(sari,LOW);
    digitalWrite(yesil,LOW);
    digitalWrite(ssari,HIGH);
    digitalWrite(yyesil,LOW);
  }
  else if (uzaklik<=50)
  {
    digitalWrite(kirmizi,LOW);
    digitalWrite(sari,LOW);
    digitalWrite(yesil,LOW);
    digitalWrite(ssari,LOW);
    digitalWrite(yyesil,HIGH);
  }
else
  {
    digitalWrite(kirmizi,LOW);
    digitalWrite(sari,LOW);
    digitalWrite(yesil,LOW);
    digitalWrite(ssari,LOW);
    digitalWrite(yyesil,LOW);
  }
  delay(100);
}
