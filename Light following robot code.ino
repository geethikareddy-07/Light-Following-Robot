#define LeftLDR 8
#define RightLDR 9
#define LeftMotor 10
#define RightMotor 11
                                           // Define the motor speed (0-255)
#define MotorSpeed 255
void setup() {
                                           // Set LDR pins as input
  pinMode(LeftLDR, INPUT);
  pinMode(RightLDR, INPUT);
                                           // Set motor pins as output
  pinMode(LeftMotor, OUTPUT);
  pinMode(RightMotor, OUTPUT);
}
  if (!digitalRead(LeftLDR) && !digitalRead(RightLDR)) {
    digitalWrite(LeftMotor, MotorSpeed);
    digitalWrite(RightMotor, MotorSpeed);
  }
  else if (!digitalRead(LeftLDR)) {
    digitalWrite(LeftMotor, 0);
    digitalWrite(RightMotor, MotorSpeed);
  }
  else if (!digitalRead(RightLDR)) {
    digitalWrite(LeftMotor, MotorSpeed);
    digitalWrite(RightMotor, 0);
  }
  else {
    digitalWrite(LeftMotor, 0);
    digitalWrite(RightMotor, 0);
  }
