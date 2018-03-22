/*!
    @file   GroveSensor.h
	@author	Alexander Collins (alexander-collins@outlook.com)
	@date	September 2017 - April 2018
	@brief  The header file for abstract GroveSensor that all GroveSensor* inherit

    Inherited by all GroveSensor* classes. Provides the user with a common interface for all
    Grove Sensor modules.

    @see http://wiki.seeed.cc/Sensor/
*/

#ifndef GROVESENSOR
#define GROVESENSOR

#include "GrovePinout.h"

//! GroveSensor virtual class. Inherited by all GroveSensor* classes
/*!
    Virtual class for all GroveSensor* modules to provide (& enforce) a common user interface to any 
    GroveSensor.
*/
class GroveSensor
{
private:
    //! GrovePinout for handling the pin logic
    GrovePinout pins;
public:
    //! Read function, will return a float of the value currently being read by the sensor
    /*!
        Read function that returns that current value being read by the sensor. In many cases the 
        float returned will be an integer, however a this virtual returns a float for the instance 
        where read values require such.

        @return Current value being read by the sensor.
    */
    virtual float read() = 0;
};

#endif //GROVESENSOR

