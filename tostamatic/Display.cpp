// 
// 
// 

#include "Display.h"

SH1106Wire display(0x3c, D2, D1);

void Display::init()
{
	// Initialising the UI will init the display too.
	display.init();
	display.flipScreenVertically();
	display.setFont(ArialMT_Plain_10);
	display.clear();
}

void Display::showWellcome()
{
	display.clear();
	display.drawXbm(0, 0, 128, 64, GRAPH_RACINGSOFT);
	display.display();
}

Display DisplayInstance;

