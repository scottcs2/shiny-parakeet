#include <Servo.h>

int const motor1Pin = 11;
int const motor2Pin= 10;
int const motor3Pin = 9;
int const motor4Pin = 6;
//int const throttleInput = 3;
//int const pitchInput = 5;
Servo motor1;
Servo motor2;
Servo motor3;
Servo motor4;



void setup() {
  // put your setup code here, to run once:
 //pinMode(receiverPin, INPUT);
 motor1.attach(motor1Pin);
 motor2.attach(motor2Pin);
 motor3.attach(motor3Pin);
 motor4.attach(motor4Pin);
 //int throttleVal;
 Serial.begin(9600);
 delay(5000);
}

void loop() {
  // put your main code here, to run repeatedly:

//throttleVal = pulseIn(throttleInput, HIGH);
//throttleVal = map(throttleVal, 1000,2000,1400,2000);
for (int throttleVal = 1000; throttleVal < 1900; throttleVal++){
motor1.writeMicroseconds(throttleVal);
motor2.writeMicroseconds(throttleVal);
motor3.writeMicroseconds(throttleVal);
motor4.writeMicroseconds(throttleVal);
Serial.print("Throttle: ");
Serial.println(throttleVal);
}

}
