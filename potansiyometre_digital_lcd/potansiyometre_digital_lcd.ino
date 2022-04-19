#include <LCD5110_Basic.h>
LCD5110 ekran(8,9,10,11,12);

extern uint8_t SmallFont[];
extern uint8_t MediumNumbers[];
extern uint8_t BigNumbers[];

int a0_deger=0;

void setup() {
ekran.InitLCD();
ekran.setContrast(70);
pinMode(A0,INPUT);
ekran.setFont(SmallFont);
ekran.print("Analog Veri",CENTER,0);
}

void loop() {

a0_deger=analogRead(A0);
String metin=String (a0_deger);
ekran.clrRow(1);
ekran.clrRow(2);
ekran.clrRow(3);
ekran.setFont(BigNumbers);
ekran.print(metin,CENTER,8);
delay(1000);
}
