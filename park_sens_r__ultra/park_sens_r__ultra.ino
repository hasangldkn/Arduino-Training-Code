#include <LiquidCrystal.h>
int trigPin=8,echoPin=9,buzzer=10,led=11;
LiquidCrystal lcd(6,7,5,4,3,2);

void setup() {
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(buzzer,OUTPUT);
pinMode(led,OUTPUT);
lcd.begin(16,2);

}

void loop() {
long sure,mesafe;
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
sure=pulseIn(echoPin,HIGH);
mesafe=(sure/2)/29.1;
lcd.clear();
lcd.setCursor(0,0);
lcd.print("MESAFE:");
lcd.setCursor(7,0);
lcd.print(mesafe);
if(mesafe<10)
{
lcd.setCursor(9,0);
lcd.print("cm");
}
else if(mesafe<100)
{
lcd.setCursor(10,0);
lcd.print("cm");
}
else if(mesafe<1000)
{
lcd.setCursor(11,0);
lcd.print("cm");
}
if(mesafe<=5)
{
digitalWrite(buzzer,HIGH);
digitalWrite(led,HIGH);
delay(20);
digitalWrite(buzzer,LOW);
digitalWrite(led,LOW);
delay(20);
}
else if(mesafe<=10)
{
digitalWrite(buzzer,HIGH);
digitalWrite(led,HIGH);
delay(50);
digitalWrite(buzzer,LOW);
digitalWrite(led,LOW);
delay(50);
}
else if(mesafe<=15)
{
digitalWrite(buzzer,HIGH);
digitalWrite(led,HIGH);
delay(70);
digitalWrite(buzzer,LOW);
digitalWrite(led,LOW);
delay(70);
}
else if(mesafe<=20)
{
digitalWrite(buzzer,HIGH);
digitalWrite(led,HIGH);
delay(100);
digitalWrite(buzzer,LOW);
digitalWrite(led,LOW);
delay(100);
}
else if(mesafe<=25)
{
digitalWrite(buzzer,HIGH);
digitalWrite(led,HIGH);
delay(150);
digitalWrite(buzzer,LOW);
digitalWrite(led,LOW);
delay(150);
}
else if(mesafe<=30)
{
digitalWrite(buzzer,HIGH);
digitalWrite(led,HIGH);
delay(250);
digitalWrite(buzzer,LOW);
digitalWrite(led,LOW);
delay(250);
}
delay(10);
}
