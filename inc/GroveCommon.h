/*
    @file   GroveDriversCommon.h
	@author	Alexander Collins (alexander-collins@outlook.com)
	@date	September 2017 - April 2018
	@brief  Data common to all GroveDrivers files (error codes, etc)
*/

#ifndef GROVECOMMON
#define GROVECOMMON

//=========
// GLOBALS
//=========
enum GroveCommon_ReturnCode {
    Success = 0,
    InvalidParam = 11
};

//===========
// FUNCTIONS
//===========
float GroveCommon_analogRead(int pin);
int GroveCommon_digitalRead(int pin);

#endif //GROVECOMMON
