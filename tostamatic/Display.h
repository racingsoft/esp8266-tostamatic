// Display.h

#ifndef _DISPLAY_h
#define _DISPLAY_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

#include "Graphics.h"
#include <Wire.h>  // Only needed for Arduino 1.6.5 and earlier
#include "SH1106Wire.h", legacy include: `#include "SH1106.h"`

class Display
{
 protected:


 public:
	void init();
	void showWellcome();
};

extern Display DisplayInstance;

#endif

