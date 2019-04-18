// Display.h

#ifndef _DISPLAY_h
#define _DISPLAY_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include "Graphics.h"
#include <Wire.h>
#include <SH1106Wire.h>

class Display
{
 protected:


 public:
	void init();
	void showWellcome();
};

extern Display DisplayInstance;

#endif

