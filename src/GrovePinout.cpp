/*
    @file   GrovePinout.cpp
	@author	Alexander Collins (alexander-collins@outlook.com)
	@date	September 2017 - April 2018
	@brief  The header file included in all grove modules that handles pin stuff

	@see http://wiki.seeed.cc/Grove_System/#interface-of-grove-modules
*/

#include "GrovePinout.h"

int GrovePinout::get(int pin)
{
    switch(pin)
    {
        case 1: return pin1;    break;
        case 2: return pin2;    break;
        default:
            return GroveCommon_ReturnCode::InvalidParam;
            break;
    }
}

int GrovePinout::set(int pin, int val)
{
    switch(pin)
    {
        case 1: pin1 = val; break;
        case 2: pin2 = val; break;
        default:
            return GroveCommon_ReturnCode::InvalidParam;
            break;
    }

    return GroveCommon_ReturnCode::Success;
}
