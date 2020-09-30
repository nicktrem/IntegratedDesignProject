#include <Arduino.h>
#include "SmartHome.h"
#include "Pins.h"

int val = 0;
SmartHome smartHome;
void setup()
{
	pinMode(NIGHT_LIGHT_PIN, OUTPUT);
	Serial.begin(9600);

	smartHome.ac.setting = OFF;
	smartHome.nightLight.setting = OFF;
	smartHome.alarm.setting = OFF;

	Serial.println("Starting the program!");

}

void loop()
{
	if(Serial.available() > 0)
	{
		char val = Serial.read();

		if(val == 0)
		{
			Serial.println("Night Light LED OFF");
			digitalWrite(NIGHT_LIGHT_PIN, LOW);
		}
		else if(val == 1)
		{
			Serial.println("Night Light LED ON");
			digitalWrite(NIGHT_LIGHT_PIN, HIGH);

		}
		else if(val == 2)
			Serial.println("Night Light LED Automatic");
	}
	delay(10);
}
