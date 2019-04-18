// 
// 
// 

#include "RotaryEncoder.h"

#define HOLD_TIME        1000  // report held button after 1s

EncoderInternalState* RotaryEncoder::encoder = &EncoderInternalStateInstance;

void rotaryIsr()
{
	cli();
	RotaryEncoder::addEncoderEvent();
	sei();
}

void buttonIsr()
{
	cli();
	RotaryEncoder::addClickEvent();
	sei();
}

RotaryEncoder::RotaryEncoder(uint8_t A, uint8_t B, uint8_t BTN)
{
	encoder = &EncoderInternalStateInstance;

	encoder->pinA = A;
	encoder->pinB = B;
	encoder->pinBTN = BTN;
	encoder->button = EncoderInternalState::Open;

	pinMode(encoder->pinA, INPUT_PULLUP);
	pinMode(encoder->pinB, INPUT_PULLUP);
	pinMode(encoder->pinBTN, INPUT_PULLUP);
	
	attachInterrupt(encoder->pinA, rotaryIsr, CHANGE);
	attachInterrupt(encoder->pinBTN, buttonIsr, CHANGE);
}

int16_t RotaryEncoder::getValue()
{
	int16_t position = encoder->position;
	encoder->position = 0;
	return position;
}

EncoderInternalState::Button RotaryEncoder::getButton()
{	
	EncoderInternalState::Button button = encoder->button;
	encoder->button = EncoderInternalState::Open;
	return button;
}

void RotaryEncoder::addEncoderEvent()
{
	if (digitalRead(encoder->pinA) == HIGH)
	{
		if (digitalRead(encoder->pinB) == HIGH)
		{
			encoder->position++;
		}
		else
		{
			encoder->position--;
		}
	}
	else
	{
		if (digitalRead(encoder->pinB) != HIGH)
		{
			encoder->position++;
		}
		else
		{
			encoder->position--;
		}
	}
}

void RotaryEncoder::addClickEvent()
{
	unsigned long now = millis();
	
	if (digitalRead(encoder->pinBTN) != HIGH)
	{ // key is down
		encoder->button = EncoderInternalState::Pressed;
		encoder->keyDownTime = now;
	}
	else
	{ // key is now up
		encoder->button = EncoderInternalState::Released;
		unsigned long elapsed = now - encoder->keyDownTime;

		if (elapsed > HOLD_TIME)
		{
			encoder->button = EncoderInternalState::Held;
		}
		else
		{
			encoder->button = EncoderInternalState::Clicked;
		}
	}
}
