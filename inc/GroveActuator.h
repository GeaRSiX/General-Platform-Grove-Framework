/*!
    @file   GroveActuator.h
	@author	Alexander Collins (alexander-collins@outlook.com)
	@date	September 2017 - April 2018
	@brief  The header file for abstract GroveActuator that all GroveActuator* classes inherit

    Inherited by all GroveActuator* classes. Provides the user with a common interface for all
    Grove Actuator modules.

    @see http://wiki.seeed.cc/Actuator/
*/

#ifndef GROVEACTUATOR
#define GROVEACTUATOR

#include "GrovePinout.h"

//! GroveActuator virtual class. Inherited by all GroveActuator* classes
/*!
    Virtual class for all GroveActuator* modules to provide (& enforce) a common user interface to any 
    GroveActuator.
*/
class GroveActuator
{
private:
    //! GrovePinout for handling the pin logic
    GrovePinout pins;
public:
    //! State function, will return a float of the current state of the actuator
    /*!
        The state function that returns that current value being returned by the actuator. In many 
        cases the float returned will be an integer, however a this virtual returns a float for the 
        instance where state values require such (e.g. Servo).

        @return Current state being read by the actuator.
    */
    virtual float state() = 0;

    //! Write function, writes a value to an actuator - usually to change it's current state
    /*!
        This write function writes a value to the pin of the actuator, which the Grove Module will 
        response to by changing it's state accordingly. 'value' is a float, however in many instances 
        only an integer will need to be passed.
        Not all modules will make use of this function (e.g. GroveActuatorButton doesn't press when 
        you write it's state to HIGH), but will allow for it on the off-chance you find some magic 
        module functionality.
    */
    virtual int write(float value) = 0;

};

#endif //GROVEACTUATOR

