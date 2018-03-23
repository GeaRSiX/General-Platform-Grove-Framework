/*
    @file   GroveCommon.cpp
	@author	Alexander Collins (alexander-collins@outlook.com)
	@date	September 2017 - April 2018
	@brief  The namespace containing all the data & functions common to all Grove files (error codes
     etc).
*/

#include "GroveCommon.h"

namespace GroveCommon
{
    float analogRead(int pin)
    {
       #error "This function is platform-specific and requires implementing"
    }

    int digitalRead(int pin)
    {
       #error "This function is platform-specific and requires implementing"
    }

    int analogWrite(int pin, float value)
    {
       #error "This function is platform-specific and requires implementing"
    }

    int digitalWrite(int pin, int value)
    {
       #error "This function is platform-specific and requires implementing"
    }
    
    uint8_t uartWrite(int rx_pin)
    {
       #error "This function is platform-specific and requires implementing"
    }

    uint8_t uartWrite(int rx_pin, uint8_t byte)
    {
       #error "This function is platform-specific and requires implementing"
    }
}
