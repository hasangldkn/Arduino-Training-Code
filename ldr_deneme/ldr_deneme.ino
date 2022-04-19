int led=3;
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  int ldr=analogRead(A0);
  Serial.println(ldr);
  if(ldr<=250)
  {
    digitalWrite(led,HIGH);
  }
  else
  {
    digitalWrite(led,LOW);
  }
  delay(500);
  

}
