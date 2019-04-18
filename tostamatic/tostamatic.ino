/*
 Name:		tostamatic.ino
 Created:	18/04/2019 11:16:50
 Author:	Rubén
*/

#include "List.h"
#include "RotaryEncoder.h"
#include "Logger.h"
#include "Display.h"
#include "OTAManager.h"

#define REFRESH_TIME 100

RotaryEncoder* encoder;
unsigned long last_time, current_time, elapsed_time;
int16_t value;
EncoderInternalState::Button button;

void setup()
{
	LoggerInstance.init();
	LoggerInstance.info("Booting...");

	LoggerInstance.info("Booting Display...");
	DisplayInstance.init();
	DisplayInstance.showWellcome();

	LoggerInstance.info("Booting Encoder...");
	encoder = new RotaryEncoder(D5, D6, D7);

	elapsed_time = REFRESH_TIME;
	last_time = millis();
}

void loop() {

	current_time = millis();
	elapsed_time += (current_time - last_time);
	last_time = current_time;

	if (elapsed_time >= REFRESH_TIME)
	{
		elapsed_time = (elapsed_time - REFRESH_TIME);

		int16_t newValue = encoder->getValue();
		if (value != newValue)
		{
			value = newValue;
			LoggerInstance.info("Encoder value: " + String(value));
		}

		EncoderInternalState::Button newButton = encoder->getButton();
		if (button != newButton)
		{
			button = newButton;
			switch (button)
			{
			case EncoderInternalState::Clicked:
				LoggerInstance.info("Clicked");
				break;
			case EncoderInternalState::DoubleClicked:
				LoggerInstance.info("DoubleClicked");
				break;
			case EncoderInternalState::Held:
				LoggerInstance.info("Held");
				break;
			}
		}

	}

	// Procesos

	// GUI

}
