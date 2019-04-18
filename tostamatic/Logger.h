// Logger.h

#ifndef _LOGGER_h
#define _LOGGER_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif

class Logger
{
 protected:

 public:
	void init();
	void info(String info);
	void warn(String warn);
	void error(String error);
};

extern Logger LoggerInstance;

#endif

