// 
// 
// 

#include "Logger.h"

void Logger::init()
{
	Serial.begin(74880);
}

void Logger::info(String info)
{
	Serial.println("[INFO]: " + info);
}

void Logger::warn(String warn)
{
	Serial.println("[WARN]: " + warn);
}

void Logger::error(String error)
{
	Serial.println("[ERROR]: " + error);
}

Logger LoggerInstance;

