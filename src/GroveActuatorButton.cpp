/*!
    @file   GroveActuatorButton.cpp
	@author	Alexander Collins (alexander-collins@outlook.com)
	@date	September 2017 - April 2018
	@brief  The source file for the GroveActuatorButton module

    Implementation for the Grove Button Actuator module. Inherits the GroveActuator interface and 
    provides the implementation for the Button Actutaor.

    @see http://wiki.seeed.cc/Grove-Button/
*/

#include "GroveActuatorButton.h"

GroveActuatorButton::state()
{
    return GroveCommon_digitalRead(pinout.get());
}



