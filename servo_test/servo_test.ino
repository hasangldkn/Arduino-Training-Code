#include <Servo.h>
Servo servo_motor_1;
void setup() {
 servo_motor_1.attach(3);

}

void loop() {
  servo_motor_1.write(0);
  delay(1500);
   servo_motor_1.write(45);
  delay(1500);
 servo_motor_1.write(90);
  delay(1500);
   servo_motor_1.write(135);
  delay(1500);
   servo_motor_1.write(180);
  delay(1500);
}
