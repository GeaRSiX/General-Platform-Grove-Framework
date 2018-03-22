/*
    @file   GroveSensorTemperature.cpp
	@author	Alexander Collins (alexander-collins@outlook.com)
	@date	September 2017 - April 2018
	@brief  The source file for the GroveSensorTemperature module.

	@see http://wiki.seeed.cc/Grove_System/#interface-of-grove-modules
*/

#include "GroveSensorTemperature.h"

float GroveSensor::read()
{
    int T = GroveCommon_analogRead(pinout.get());
    float R = R0 * (1023.0 / T - 1.0);
    float temperature = 1.0 / (log(R/R0) / B+1 / 298.15) - 273.15;

    return temperature;
}

