#include <IRremote.h>

const int ir_kumanda_pini=2;
const int OUT1=5;
const int OUT2=6;
const int OUT3=7;
const int OUT4=8;
const int motor_kontrol_1=9;
const int motor_kontrol_2=10;
const int echoPin=11;
const int trigPin=12;
int hiz=80;
IRrecv ir_alicim(ir_kumanda_pini);
decode_results results;

 #define yukari_ok 16718055 //İLERİ GİT:YUKARI OK
 #define asagi_ok 16730805 //GERİ GİT:AŞAĞI OK
 #define sol_ok 16716015 //SOLA DÖN:SOL OK
 #define sag_ok 16734885 //SAĞA DÖN:SAĞ OK
 #define kare 16756815 //HIZ AZALT:KARE TUŞU
 #define yildiz 16738455 //HIZ ARTTIR:YILDIZ TUŞU
 #define tus_0 16750695 //DURDUR:0 TUŞU
 
void setup() {
pinMode(OUT1,OUTPUT);
pinMode(OUT2,OUTPUT);
pinMode(OUT3,OUTPUT);
pinMode(OUT4,OUTPUT);
pinMode(motor_kontrol_1,OUTPUT);
pinMode(motor_kontrol_2,OUTPUT);
pinMode(echoPin,INPUT);
pinMode(trigPin,OUTPUT);

digitalWrite(motor_kontrol_1,LOW);
digitalWrite(motor_kontrol_2,LOW);
digitalWrite(OUT1,LOW);
digitalWrite(OUT2,LOW);
digitalWrite(OUT3,LOW);
digitalWrite(OUT4,LOW);

ir_alicim.enableIRIn();
}

void loop() 
{
int mesafe=mesafe_olcumu();
if(mesafe>40)
{
  if(ir_alicim.decode(&results))
  {
    switch(results.value)
    {
      case kare:
      if(hiz<255)
      hiz+=5;
      break;

      case yildiz:
      if(hiz>80)
      hiz-=5;
      break;

      case yukari_ok:
      motor_hareketleri(1,0,0,1,hiz);
      break;

      case asagi_ok:
      motor_hareketleri(0,1,1,0,hiz);
      break;

      case sol_ok:
      motor_hareketleri(1,0,1,0,hiz);
      break;

      case sag_ok:
      motor_hareketleri(0,1,0,1,hiz);
      break;

      case tus_0:
      motor_hareketleri(0,0,0,0,hiz);
      break;
      
    }
    ir_alicim.resume();
  }
}
else
{
  motor_hareketleri(0,1,1,0,hiz);
  delay(500);
  motor_hareketleri(0,0,0,0,0);
}

}

int mesafe_olcumu()
{
  long sure,mesafe;
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  sure=pulseIn(echoPin,HIGH);
  mesafe=sure/2/29.1;
  delay(50);
  return(mesafe);
}

void motor_hareketleri(int deger1,int deger2,int deger3,int deger4,int hiz)
{
  digitalWrite(OUT1,deger1);
  digitalWrite(OUT2,deger2);
  digitalWrite(OUT3,deger3);
  digitalWrite(OUT4,deger4);
  analogWrite(motor_kontrol_1,hiz);
  analogWrite(motor_kontrol_2,hiz);
}
