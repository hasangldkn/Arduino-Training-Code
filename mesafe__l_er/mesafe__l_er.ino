int trigPin=9;
int echoPin=10;
long sure;
long uzaklik;
void setup() {
 pinMode(trigPin,OUTPUT);
 pinMode(echoPin,INPUT);
 Serial.begin(9600);
}

void loop() {
 digitalWrite(trigPin,LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin,LOW);
 sure=pulseIn(echoPin,HIGH);
 uzaklik=sure/2/29.154;

 Serial.print("Sinyal:");
 Serial.print(sure);
 Serial.println(" hareket etmiştir.");

 Serial.print("Mesafe");
 Serial.print(uzaklik);
 Serial.println(" CM");

 delay(1000);

}
