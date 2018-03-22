/*!
    @file   GroveActuatorButton.h
	@author	Alexander Collins (alexander-collins@outlook.com)
	@date	September 2017 - April 2018
	@brief  The header file for the GroveActuatorButton module

    Implementation for the Grove Button Actuator module. Inherits the GroveActuator interface and 
    provides the implementation for the Button Actutaor.

    @see http://wiki.seeed.cc/Grove-Button/
*/

#ifndef GROVEACTUATORBUTTON
#define GROVEACTUATORBUTTON

#include "GrovePinout.h"
#include "GroveCommon.h"
#include "GroveActuator.h"

//!
/*!
*/
class GroveActuatorButton : public GroveActuator
{
private:
public:
    //! Constructor
    /*! Creates an instnace of GroveActuatorButton
        
        @param digital_pin The digital pin that either pin1 or pin2 are connected to (yellow/white 
        cable) (Note: doesn't matter which).
    */
    GroveActuatorButton(int digital_pin)
     : pinout(new GrovePinout(digital_pin)) {};

    //! State function, will return a float of the current state of the actuator
    /*!
        The state function that returns that current value being returned by the actuator. In many 
        cases the float returned will be an integer, however a this virtual returns a float for the 
        instance where state values require such (e.g. Servo).

        @return Current state being read by the actuator.
    */
    float state();

    //! Write function, writes a value to an actuator - usually to change it's current state
    /*!
        This write function writes a value to the pin of the actuator, which the Grove Module will 
        response to by changing it's state accordingly. 'value' is a float, however in many instances 
        only an integer will need to be passed.
        Not all modules will make use of this function (e.g. GroveActuatorButton doesn't press when 
        you write it's state to HIGH), but will allow for it on the off-chance you find some magic 
        module functionality.
    */
    int write(float value);
}

#endif //GROVEACTUATORBUTTON

