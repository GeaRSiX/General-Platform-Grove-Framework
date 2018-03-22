/*!
    @file   GrovePinout.h
	@author	Alexander Collins (alexander-collins@outlook.com)
	@date	September 2017 - April 2018
	@brief  The header file included in all grove modules that handles pin stuff

    Handles all the pin stuff for GroveDrivers modules.

	@see http://wiki.seeed.cc/Grove_System/#interface-of-grove-modules
*/

#ifndef GROVE_PINOUT
#define GROVE_PINOUT

#include "GroveCommon.h"

class GrovePinout
{
private:
    int pin1;
    int pin2;
public:
    //! Constructor
    /*! Creates an instance of GrovePinout

            Not all grove modules require pin1 and pin2. For example, the Digital and 
            Analog grove modules use pin1 and pin2 for the same purpose - others, such 
            as UART and I2C use both though.
        
        @param pin1 The pin corresponding to pin1 (yellow cable) of the Grove Interface.
        @param pin2 The pin corresponding to pin2 (white cable) of the Grove Interface.
    */
    GrovePinout(int pin1, int pin2)
     : pin1(pin1), pin2(pin2) {};

    //! Constructor
    /*! Creates an instance of GrovePinout

            Not all grove modules require pin1 and pin2. For example, the Digital and 
            Analog grove modules use pin1 and pin2 for the same purpose - others, such 
            as UART and I2C use both though.
        
        @param pin The pin corresponding to the pin being used.
    */
    GrovePinout(int pin)
     : pin1(pin) {};

    //! Get a pin's value
    /*!
        @param pin Pin to retrieve the value of (1 or 2)

        @return Common_ReturnCodes::InvalidParam if pin is not a valid parameter (1 or 2)
    */
    int get(int pin);

    //! Set a pin's value
    /*!
        @param pin Pin to set the value of (1 or 2)
        @param val Value to set pin to

        @return Common_ReturnCodes::Success if val was set to pin successfully
        @return Common_ReturnCodes::InvalidParam if pin is not a valid parameter (1 or 2)
    */
    int set(int pin, int val);
};

#endif //GROVE_PINOUT

