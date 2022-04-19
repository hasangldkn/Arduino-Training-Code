#include <LCD5110_Basic.h>
LCD5110 ekran(8,9,10,11,12);
extern uint8_t SmallFont[];
extern uint8_t MediumNumbers[];
extern uint8_t BigNumbers[];
void setup() {
ekran.InitLCD();
ekran.setContrast(70);
}

void loop() {
ekran.disableSleep();
ekran.setFont(SmallFont);
ekran.print("Uyku Modu",CENTER,0);
for(int i=5;i>=0;i--)
{
  String ifade=String (i);
  ekran.setFont(BigNumbers);
  ekran.print(ifade,CENTER,8);
  delay(1000);
}
ekran.enableSleep();
delay(3000);
}
