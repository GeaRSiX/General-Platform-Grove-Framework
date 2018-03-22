/*!
    @file   GroveSensorTemperature.h
	@author	Alexander Collins (alexander-collins@outlook.com)
	@date	September 2017 - April 2018
	@brief  The header file for the GroveSensorTemperature module.

    Implementation for the Grove Temperature Sensor module. Inherits the GroveSensor interface and 
    provides the implementation for the Temperature Sensor.

    @see http://wiki.seeed.cc/Grove-Temperature_Sensor/
    @see http://wiki.seeed.cc/Grove-Temperature_Sensor_V1.2/
*/

#ifndef GROVESENSORTEMPERATURE
#define GROVESENSORTEMPERATURE

#include "GroveCommon.h"
#include "GroveSensor.h"
#include "GrovePinout.h"

//!
/*!
*/
class GroveSensorTemperature : public GroveSensor
{
private:
    static const int B = 4275;      // B constant of thermistor
    static const long R0 = 100000;  // Resistance in ambient temperature T0(K) = 100k
public:
    //! Constructor
    /*! Creates an instance of GroveSensorTemperature

        @param analog_pin The analog pinout that either pin1 or pin2 are connected to (yellow/white 
        cable) (Note: doesn't matter which.
    */
    GroveSensorTemperature(int analog_pin)
     : pinout(new GrovePinout(analog_pin)) {};

    //! Read function, returns a float of the current temperature in Celcius
    /*!
        The celcius temperature is calculate using the reference in the link below

            The detectable temperature range is between -40ºC to 125ºC
            The accuracy is within ±1.5ºC

        @see http://wiki.seeed.cc/Grove-Temperature_Sensor_V1.2/#reference
    */
    float read();
};

#endif //GROVESENSORTEMPERATURE

