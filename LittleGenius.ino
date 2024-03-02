//V2.0

//Included Libraries
#include <Servo.h>

//MACROS are defined here
Servo Servo10;
Servo Servo11;

void setup() {
	//put your setup code here, to run once:
	pinMode(2, OUTPUT);
	pinMode(3, OUTPUT);
	pinMode(4, OUTPUT);
	pinMode(5, OUTPUT);
	pinMode(6, OUTPUT);
	pinMode(7, OUTPUT);
	Servo10.attach(10);
	Servo11.attach(11);
	
}

void loop() {
	//put your main code here, to run repeatedly:
	
	// Tiempo 1
	digitalWrite(2, true);
	digitalWrite(3, true);
	digitalWrite(4, true);
	digitalWrite(5, true);
	digitalWrite(6, true);
	digitalWrite(7, true);
	Servo10.write(0);
	Servo11.write(0);
	delay(.1 * 1000);

  // Tiempo 2
	digitalWrite(2, false);
	digitalWrite(5, false);
	delay(.1 * 1000);

  // Tiempo 3
	digitalWrite(2, true);
	Servo11.write(180);
	delay(.1 * 1000);

  // Tiempo 4
	digitalWrite(2, false);
	digitalWrite(3, false);
	delay(.1 * 1000);

  // Tiempo 5
	digitalWrite(2, true);
	Servo11.write(0);
	delay(.1 * 1000);

  // Tiempo 6
	digitalWrite(2, false);
	delay(.1 * 1000);

  // Tiempo 7
	digitalWrite(2, true);
	digitalWrite(3, true);
	digitalWrite(4, false);
	Servo10.write(180);
	Servo11.write(180);
	delay(.1 * 1000);

  // Tiempo 8
	digitalWrite(2, false);
	delay(.1 * 1000);

  // Tiempo 9
	digitalWrite(2, true);
	Servo11.write(0);
	delay(.1 * 1000);

  // Tiempo 10
	digitalWrite(2, false);
	digitalWrite(3, false);
	delay(.1 * 1000);

  // Tiempo 11
	digitalWrite(2, true);
	Servo11.write(180);
	delay(.1 * 1000);

  // Tiempo 12
	digitalWrite(2, false);
	delay(.1 * 1000);

  // Tiempo 13
	digitalWrite(2, true);
	digitalWrite(3, true);
	digitalWrite(4, true);
	digitalWrite(6, false);
	Servo11.write(0);
	delay(.1 * 1000);

  // Tiempo 14
	digitalWrite(2, false);
	digitalWrite(5, false);
	delay(.1 * 1000);

  // Tiempo 15
	digitalWrite(2, true);
	Servo11.write(180);
	delay(.1 * 1000);

  // Tiempo 16
	digitalWrite(2, false);
	digitalWrite(3, false);
	delay(.1 * 1000);

  // Tiempo 17
	digitalWrite(2, true);
	Servo11.write(0);
	delay(.1 * 1000);

  // Tiempo 18
	digitalWrite(2, false);
	delay(.1 * 1000);

  // Tiempo 19
	digitalWrite(2, true);
	digitalWrite(3, true);
	digitalWrite(4, false);
	Servo11.write(180);
	delay(.1 * 1000);

  // Tiempo 20
	digitalWrite(2, false);
	delay(.1 * 1000);

  // Tiempo 21
	digitalWrite(2, true);
	Servo11.write(0);
	delay(.1 * 1000);

  // Tiempo 22
	digitalWrite(2, false);
	digitalWrite(3, false);
	delay(.1 * 1000);

  // Tiempo 23
	digitalWrite(2, true);
	Servo11.write(180);
	delay(.1 * 1000);

  // Tiempo 24
	digitalWrite(2, false);
	delay(.1 * 1000);
}
