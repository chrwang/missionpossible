#include <AFMotor.h>
AF_DCMotor motor(1, MOTOR12_64KHZ); // create motor #2, 64KHz pwm
void setup() {
  Serial.begin(9600); // set up Serial library at 9600 bps
  Serial.println("Motor test!");
  motor.setSpeed(255); // set the speed to 200/255
}
void loop() {
  motor.run(FORWARD); // turn it on going forward

}
