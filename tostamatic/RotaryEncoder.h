// RotaryEncoder.h

#ifndef _ROTARYENCODER_h
#define _ROTARYENCODER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include "EncoderInternalState.h"
#include "List.h"

class RotaryEncoder
{
 public:

	 typedef enum buttonState
	 {
		 Pressed = 0,
		 Released,
	 } ButtonState;

	 typedef struct buttonEvent
	 {
		 ButtonState state;
		 unsigned long time;
	 } ButtonEvent;

	 typedef enum button 
	 {
		 Open = 0,
		 Clicked,
		 DoubleClicked,
		 Held
	 } Button;

	 typedef struct rotaryEvents
	 {
		 List<ButtonEvent> clicks;
	 } RotaryEvents;

	RotaryEncoder(uint8_t A, uint8_t B, uint8_t BTN);
	
	int16_t getValue(void);
	EncoderInternalState::Button getButton(void);

	static void addEncoderEvent();
	static void addClickEvent();

	static RotaryEvents* events;
};

#endif

