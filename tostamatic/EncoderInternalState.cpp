// 
// 
// 

#include "EncoderInternalState.h"

EncoderInternalState::EncoderInternalState()
{
	position = 0;
	button = EncoderInternalState::Open;
	keyDownTime = 0;
}

EncoderInternalState EncoderInternalStateInstance;

