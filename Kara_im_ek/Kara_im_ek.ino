int  LEDdizisi[]={2,3,4,5,6,7};

void setup() {
  for(int i=0;i<6;i++)
  {
    pinMode(LEDdizisi[i],OUTPUT);
  }

}

void loop() {
  Serial.begin(9600);
 for(int i=0;i<6;i++)
 {
  digitalWrite(LEDdizisi[i],HIGH);
  delay(70);
  digitalWrite(LEDdizisi[i],LOW);
    Serial.println(i);
 }
 for(int j=5;j>-1;j--)
 {
  
 digitalWrite(LEDdizisi[j],HIGH);
 delay(70);
 digitalWrite(LEDdizisi[j],LOW);
 Serial.println(j);
 }
}
