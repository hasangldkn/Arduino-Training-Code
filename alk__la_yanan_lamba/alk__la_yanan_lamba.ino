int sensor_pin=2;
int yesil_LED=3;
int sari_LED=4;
int kirmizi_LED=5;
void setup() {
pinMode(sensor_pin,INPUT);
pinMode(yesil_LED,OUTPUT);
pinMode(sari_LED,OUTPUT);
pinMode(kirmizi_LED,OUTPUT);
Serial.begin(9600);
}

void loop() {
int sensorVeri=digitalRead(sensor_pin);
if(sensorVeri==LOW)
{
  Serial.println("Alkış algılandı!");
  digitalWrite(yesil_LED,HIGH);
  digitalWrite(sari_LED,HIGH);
  digitalWrite(kirmizi_LED,HIGH);
  delay(1000);
}
else
{
  digitalWrite(yesil_LED,LOW);
  digitalWrite(sari_LED,LOW);
  digitalWrite(kirmizi_LED,LOW);
}
}
