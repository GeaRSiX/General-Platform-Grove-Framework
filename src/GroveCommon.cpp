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
    #ifndef DEBUG
       #error "This function is platform-specific and requires implementing"
    #endif
    }

    int digitalRead(int pin)
    {
    #ifndef DEBUG
       #error "This function is platform-specific and requires implementing"
    #endif
    }

    int analogWrite(int pin, uint8_t value)
    {
    #ifndef DEBUG
       #error "This function is platform-specific and requires implementing"
    #endif
    }

    int digitalWrite(int pin, uint8_t value)
    {
    #ifndef DEBUG
       #error "This function is platform-specific and requires implementing"
    #endif
    }
 
    uint8_t uartRead(int rx_pin)
    {
    #ifndef DEBUG
       #error "This function is platform-specific and requires implementing"
    #endif
    }

    uint8_t uartWrite(int rx_pin, uint8_t byte)
    {
    #ifndef DEBUG
       #error "This function is platform-specific and requires implementing"
    #endif
    }
}
