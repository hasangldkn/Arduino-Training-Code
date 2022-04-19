byte A=2,B=3,C=4,D=5;
void setup() {
pinMode(A,OUTPUT);
pinMode(B,OUTPUT);
pinMode(C,OUTPUT);
pinMode(D,OUTPUT);

}

void loop() {
digitalWrite(A,1);
digitalWrite(B,0);
digitalWrite(C,0);
digitalWrite(D,0);
delay(100);
digitalWrite(A,0);
digitalWrite(B,1);
digitalWrite(C,0);
digitalWrite(D,0);
delay(100);
digitalWrite(A,0);
digitalWrite(B,0);
digitalWrite(C,1);
digitalWrite(D,0);
delay(100);
digitalWrite(A,0);
digitalWrite(B,0);
digitalWrite(C,0);
digitalWrite(D,1);
delay(100);

}
