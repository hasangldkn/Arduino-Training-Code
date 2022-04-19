#include <IRremote.hpp>
int sari=3,kirmizi=4,yesil=5,beyaz=6,ses=7;
int IRdatapin=2;

IRrecv IR0(IRdatapin);
decode_results results;

#define tusguc 16738455
#define tus0 16753245
#define tus1 16736925
#define tus2 16769565
#define tus3 16720605
#define tus4 16712445
#define tus5 16761405

void setup() {
Serial.begin(9600);
pinMode(sari,OUTPUT);
pinMode(kirmizi,OUTPUT);
pinMode(yesil,OUTPUT);
pinMode(beyaz,OUTPUT);
pinMode(ses,OUTPUT);
IR0.enableIRIn();

}

void loop() {
if(IR0.decode(&results))
{
  Serial.println(results.value);
  IR0.resume();
  if(results.value==tusguc)
  {
    digitalWrite(sari,HIGH);
    digitalWrite(kirmizi,HIGH);
    digitalWrite(yesil,HIGH);
    digitalWrite(beyaz,HIGH);
  }
  else if(results.value==tus0)
  {
    digitalWrite(sari,LOW);
    digitalWrite(kirmizi,LOW);
    digitalWrite(yesil,LOW);
    digitalWrite(beyaz,LOW);
  }
  else if(results.value==tus1)
  {
    digitalWrite(sari,!digitalRead(sari));
    digitalWrite(kirmizi,LOW);
    digitalWrite(yesil,LOW);
    digitalWrite(beyaz,LOW);
  }
  else if(results.value==tus2)
  {
    digitalWrite(sari,LOW);
    digitalWrite(kirmizi,!digitalRead(kirmizi));
    digitalWrite(yesil,LOW);
    digitalWrite(beyaz,LOW);
  }
  else if(results.value==tus3)
  {
    digitalWrite(sari,LOW);
    digitalWrite(kirmizi,LOW);
    digitalWrite(yesil,!digitalRead(yesil));
    digitalWrite(beyaz,LOW);
  }
  else if(results.value==tus4)
  {
    digitalWrite(sari,LOW);
    digitalWrite(kirmizi,LOW);
    digitalWrite(yesil,LOW);
    digitalWrite(beyaz,!digitalRead(beyaz));
  }
  else if(results.value==tus5)
  {
    digitalWrite(ses,!digitalRead(ses));
  }
  
}
delay(500);
}
