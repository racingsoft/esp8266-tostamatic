// EncoderInternalState.h

#ifndef _ENCODERINTERNALSTATE_h
#define _ENCODERINTERNALSTATE_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class EncoderInternalState
{
 public:
	 
	 typedef enum ButtonEnum {
		 Open = 0,
		 Pressed,
		 Released,
		 Clicked,
		 DoubleClicked,
		 Held
	 } Button;

	 EncoderInternalState();

	 uint8_t pinA;
	 uint8_t pinB;
	 uint8_t pinBTN;
	 volatile int16_t position;
	 volatile Button button;
	 volatile unsigned long keyDownTime;
};

extern EncoderInternalState EncoderInternalStateInstance;

#endif
