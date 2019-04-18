// Graphics.h

#ifndef _GRAPHICS_h
#define _GRAPHICS_h

#if defined(ARDUINO) && ARDUINO >= 100
	#include "arduino.h"
#else
	#include "WProgram.h"
#endif
	
	// Racingsoft 128x64

	const uint8_t GRAPH_RACINGSOFT[] PROGMEM = {
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xFC, 0x07, 0xF0, 
		0x1F, 0xC0, 0x7F, 0x00, 0xFF, 0x01, 0xFC, 0x07, 0x00, 0x00, 0x80, 0xFF, 0x01, 0xFC, 0x07, 0xF0, 0x1F, 0xC0, 0x7F, 0x00, 0xFF, 
		0x01, 0xFC, 0x07, 0x00, 0x00, 0x80, 0xFF, 0x01, 0xFC, 0x07, 0xF0, 0x1F, 0xC0, 0x7F, 0x00, 0xFF, 0x01, 0xFC, 0x07, 0x00, 0x00, 
		0x80, 0xFF, 0x01, 0xFC, 0x07, 0xF0, 0x1F, 0xC0, 0x7F, 0x00, 0xFF, 0x01, 0xFC, 0x07, 0x00, 0x00, 0x80, 0xFF, 0x01, 0xFC, 0x07, 
		0xF0, 0x1F, 0xC0, 0x7F, 0x00, 0xFF, 0x01, 0xFC, 0x07, 0x00, 0x00, 0x80, 0xFF, 0x01, 0xFC, 0x07, 0xF0, 0x1F, 0xC0, 0x7F, 0x00, 
		0xFF, 0x01, 0xFC, 0x07, 0x00, 0x00, 0x80, 0xFF, 0x01, 0xFC, 0x07, 0xF0, 0x1F, 0xC0, 0x7F, 0x00, 0xFF, 0x01, 0xFC, 0x07, 0x00, 
		0x00, 0x80, 0xFF, 0x01, 0xFC, 0x07, 0xF0, 0x1F, 0xC0, 0x7F, 0x00, 0xFF, 0x01, 0xFC, 0x07, 0x00, 0x00, 0x80, 0x01, 0xFE, 0x03, 
		0xF8, 0x0F, 0xE0, 0x3F, 0x80, 0xFF, 0x00, 0xFE, 0x03, 0x00, 0x00, 0x00, 0x80, 0x01, 0xFE, 0x03, 0xF8, 0x0F, 0xE0, 0x3F, 0x80, 
		0xFF, 0x00, 0xFE, 0x03, 0x00, 0x00, 0x00, 0x80, 0x01, 0xFE, 0x03, 0xF8, 0x0F, 0xE0, 0x3F, 0x80, 0xFF, 0x00, 0xFE, 0x03, 0x00, 
		0x00, 0x00, 0x80, 0x01, 0xFE, 0x03, 0xF8, 0x0F, 0xE0, 0x3F, 0x80, 0xFF, 0x00, 0xFE, 0x03, 0x00, 0x00, 0x00, 0x80, 0x01, 0xFE, 
		0x03, 0xF8, 0x0F, 0xE0, 0x3F, 0x80, 0xFF, 0x00, 0xFE, 0x03, 0x00, 0x00, 0x00, 0x80, 0x01, 0xFE, 0x03, 0xF8, 0x0F, 0xE0, 0x3F, 
		0x80, 0xFF, 0x00, 0xFE, 0x03, 0x00, 0x00, 0x00, 0x80, 0x01, 0xFE, 0x03, 0xF8, 0x0F, 0xE0, 0x3F, 0x80, 0xFF, 0x00, 0xFE, 0x03, 
		0x00, 0x00, 0x00, 0x80, 0x01, 0xFE, 0x03, 0xF8, 0x0F, 0xE0, 0x3F, 0x80, 0xFF, 0x00, 0xFE, 0x03, 0x00, 0x00, 0x00, 0x80, 0x01, 
		0xFE, 0x03, 0xF8, 0x0F, 0xE0, 0x3F, 0x80, 0xFF, 0x00, 0xFE, 0x03, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x01, 0xFC, 0x07, 0xF0, 0x1F, 
		0xC0, 0x7F, 0x00, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
		0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x81, 0xFF, 0xC3, 0xFF, 0xF0, 0xDF, 0xF7, 0xF1, 0xF9, 0x1F, 
		0x00, 0x00, 0x00, 0xF0, 0x8F, 0x87, 0x81, 0xFF, 0xE7, 0xFF, 0xF9, 0xDF, 0xF7, 0xF1, 0xFC, 0x3F, 0x00, 0x00, 0x00, 0xF0, 0xCF, 
		0x87, 0x81, 0xC7, 0xE7, 0xF1, 0x79, 0xC0, 0xF3, 0xF1, 0x3C, 0x3E, 0x00, 0x00, 0x00, 0xF8, 0xC0, 0x83, 0x81, 0xC7, 0xE7, 0xF1, 
		0x79, 0xC0, 0xF3, 0xF9, 0x3C, 0x3E, 0xFF, 0xE3, 0x7F, 0xFE, 0xF7, 0x8F, 0xC1, 0xC7, 0xF3, 0xF1, 0x7C, 0xE0, 0xFB, 0xFB, 0x3E, 
		0x80, 0xFF, 0xF3, 0x7F, 0xFE, 0xF3, 0x8F, 0xC1, 0xC7, 0xF3, 0xF1, 0x7C, 0xE0, 0xFB, 0xFB, 0x3E, 0x80, 0xC7, 0xF3, 0x79, 0x78, 
		0xC0, 0x83, 0xC1, 0xE7, 0xF3, 0xF9, 0x7C, 0xE0, 0xFB, 0x7B, 0x3E, 0x80, 0xC7, 0xF3, 0x78, 0x78, 0xE0, 0x83, 0xC1, 0xE3, 0xF3, 
		0xF8, 0x3C, 0xE0, 0x79, 0x7F, 0x1E, 0x80, 0xFF, 0xF1, 0x7C, 0x7C, 0xE0, 0x81, 0xC1, 0xFF, 0xF3, 0xFF, 0x3C, 0xE0, 0x79, 0x7F, 
		0xDE, 0x9F, 0xFF, 0xF1, 0x3C, 0x3C, 0xE0, 0x81, 0xE1, 0xFF, 0xF9, 0x7F, 0x3E, 0xF0, 0x7D, 0x7F, 0xDF, 0x0F, 0xE0, 0xF9, 0x3C, 
		0x3C, 0xE0, 0x81, 0xE1, 0xFB, 0xF8, 0x78, 0x3E, 0xF0, 0x7D, 0x3E, 0x1F, 0xCF, 0xE3, 0x79, 0x3C, 0x3C, 0xE0, 0x81, 0xE1, 0xFB, 
		0xF8, 0x7C, 0x1E, 0xF0, 0x7D, 0x3E, 0x8F, 0xCF, 0xF3, 0x79, 0x3E, 0x3E, 0xF0, 0x80, 0xE1, 0xF1, 0x78, 0x7C, 0xFE, 0xF3, 0x3C, 
		0x3E, 0xFF, 0xCF, 0xFF, 0xF8, 0x1F, 0x1E, 0xF0, 0x83, 0xE1, 0xF1, 0x78, 0x7C, 0xFE, 0xFB, 0x3C, 0x3E, 0xFF, 0xC7, 0x7F, 0xF8, 
		0x0F, 0x1E, 0xE0, 0x83, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x01, 0xFC, 0x07, 0xF0, 0x1F, 0xC0, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
		0xFF, 0x01, 0xFC, 0x07, 0xF0, 0x1F, 0xC0, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x01, 0xFC, 0x07, 0xF0, 
		0x1F, 0xC0, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x01, 0xFC, 0x07, 0xF0, 0x1F, 0xC0, 0x7F, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0xFE, 0x03, 0xF8, 0x0F, 0xE0, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x80, 0x01, 0xFE, 0x03, 0xF8, 0x0F, 0xE0, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0xFE, 0x03, 0xF8, 
		0x0F, 0xE0, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0xFE, 0x03, 0xF8, 0x0F, 0xE0, 0x3F, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0xFE, 0x03, 0xF8, 0x0F, 0xE0, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x80, 0x01, 0xFE, 0x03, 0xF8, 0x0F, 0xE0, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0xFE, 0x03, 
		0xF8, 0x0F, 0xE0, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0xFE, 0x03, 0xF8, 0x0F, 0xE0, 0x3F, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0xFE, 0x03, 0xF8, 0x0F, 0xE0, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x80, 0xFF, 0x01, 0xFC, 0x07, 0xF0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x01, 
		0xFC, 0x07, 0xF0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x01, 0xFC, 0x07, 0xF0, 0x1F, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x01, 0xFC, 0x07, 0xF0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x80, 0xFF, 0x01, 0xFC, 0x07, 0xF0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 
		0x01, 0xFC, 0x07, 0xF0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x01, 0xFC, 0x07, 0xF0, 0x1F, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x01, 0xFC, 0x07, 0xF0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x80, 0xFF, 0x01, 0xFC, 0x07, 0xF0, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF
	};

	// TOAST 20x20
	// magick convert toast.png toast.mono

	const uint8_t GRAPH_TOAST[] PROGMEM = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0xFF, 0x03, 0x02, 
		0x00, 0x04, 0x01, 0x00, 0x08, 0xE1, 0x7F, 0x08, 0x02, 0x40, 
		0x04, 0xE4, 0x7F, 0x02, 0x24, 0x00, 0x02, 0xE4, 0x7F, 0x02, 
		0x04, 0x40, 0x02, 0xE4, 0x7F, 0x02, 0x24, 0x00, 0x02, 0xE4, 
		0x7F, 0x02, 0x04, 0x40, 0x02, 0xE4, 0x7F, 0x02, 0x04, 0x00, 
		0x02, 0xFC, 0xFF, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	};

	// CONFIG 20x20
	const uint8_t GRAPH_CONFIG[] PROGMEM = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 
		0x0A, 0x00, 0x70, 0xDB, 0x01, 0xD0, 0x71, 0x01, 0x30, 0x9B, 
		0x01, 0xA0, 0xA0, 0x00, 0x70, 0xC0, 0x01, 0x5C, 0x40, 0x07, 
		0x04, 0x00, 0x04, 0x5C, 0x40, 0x07, 0x70, 0xC0, 0x01, 0xA0, 
		0xA0, 0x00, 0x30, 0x9B, 0x01, 0xD0, 0x71, 0x01, 0x70, 0xDB, 
		0x01, 0x00, 0x0A, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00
	};

	// WIFI 20x20
	const uint8_t GRAPH_WIFI[] PROGMEM = {
		0x00, 0x00, 0x00, 0x10, 0x80, 0x00, 0x08, 0x00, 0x01, 0x48, 
		0x20, 0x01, 0x24, 0x40, 0x02, 0x24, 0x49, 0x02, 0x94, 0x90, 
		0x02, 0x54, 0xA6, 0x02, 0x94, 0x96, 0x02, 0x24, 0x4F, 0x02, 
		0x24, 0x46, 0x02, 0x48, 0x26, 0x01, 0x08, 0x06, 0x01, 0x10, 
		0x86, 0x00, 0x00, 0x06, 0x00, 0x00, 0x06, 0x00, 0x00, 0x06, 
		0x00, 0x00, 0x06, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00
	};

	// DOWNLOAD 20x20
	const uint8_t GRAPH_DOWNLOAD[] PROGMEM = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x38, 
		0xC6, 0x01, 0x7C, 0xE6, 0x03, 0x0C, 0x06, 0x03, 0x0C, 0x06, 
		0x03, 0x0C, 0x06, 0x03, 0x0C, 0x06, 0x03, 0xCC, 0x3F, 0x03, 
		0x8C, 0x1F, 0x03, 0x0C, 0x0F, 0x03, 0x0C, 0x06, 0x03, 0x0C, 
		0x00, 0x03, 0x0C, 0x00, 0x03, 0x0C, 0x00, 0x03, 0xFC, 0xFF, 
		0x03, 0xF8, 0xFF, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	};
#endif

