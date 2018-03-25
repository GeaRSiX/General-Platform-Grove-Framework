# General-Platform Grove Framework
A non-platform-specific embedded C++ framework for using seeed's Grove modules.
**Specifc platforms are supported on seperate branches!**

## Contents
1. Overview
2. Framework Documentation
4. Usage
5. Supported Platforms
6. Adding Platforms
7. Authors

## Overview
The idea behind this is to provide an embedded C++ framework for using Grove Modules without targeting specific hardware. This is done by keeping the _master_ branch of this repo as general-purpose as possible - without using any _platform specific_ fucntionality. Of course the problem with this is that platform specific functionality is required to talk to hardware. The solution is to **modularise all the platform specific functionality in wrapper functions** (_Found in GroveCommon_) that the different classes call upon.

The GroveCommon wrapper functions don't have an implementation on the master branch and instead have an #error macro telling you to implement the functionality for your platform. **Note: it's important that you implement these wrapper functions as they're expected - see the documentation/comments for details on this**.

Then for a specific platform, you make a _platform/*_ branch and add your platform-specific implementation. **For examples of this, see 5. Supported Platforms**.


## Framework Documentation
The API is currently documented using [Doxygen](http://www.stack.nl/~dimitri/doxygen/). All the comments are doxygen compatible and I've tried to be as thorough as possible, but I'll give a brief overview of it here for ease-of-use sake.

The framework splits Grove modules in their general [types](http://wiki.seeed.cc/Grove/): [Sensors](http://wiki.seeed.cc/Sensor/), [Actuators](http://wiki.seeed.cc/Actuator/), [Display](http://wiki.seeed.cc/Display/), [Communication](http://wiki.seeed.cc/Communication/) and [Other](http://wiki.seeed.cc/Others/).

An [Abstract Base Class](https://isocpp.org/wiki/faq/abcs) is written for each type, these ABCs each contain a  ```GrovePinout``` object that defines it's pin logic. For the _master_ branch, this class simply has a variable for pin1 and pin2 of the Grove Modules.

Individual modules then inherit from one of these ABCs, depending upon their type and provide their implementation for the ABC's virtual functions. In it's constructor it just needs to create an instance of it's parent ABC.

_To see module functionality, just look at the _Abstract Base Classes_ (ABC's) since each module is requried to implement these._

### Supported Grove Modules
**TODO: add a list of the module->type mapping here**

## Usage
This is obviously going to depend on your platform.

See specific-branch README's for usage on specific platforms (**5. Supported Platforms**)

If your platform isn't supported, see **6. Adding Platform Support**.

### General
The general-usage stuff (found in GroveCommon) can be called by calling the namespace first: ```GroveCommon::*```, where the * is the variable/function you want to call. Generally you won't need to do this aside from using the ```MAX_BUFF``` variable and ```ReturnCode``` enum.

The individual modules can be called by first declaring an object of your target module. To see the available modules, see **Framework Documentation/Supported Grove Modules**. The functions each module can perform can be viewed in the ABC classes (see **Framework Documentation** for details).

#### example
```
#include "GroveDrivers.h"

#define PIN1	1

GroveButton button(PIN1);

int main()
{
	while (1)
    {
    	printf("%i", (int)button.read());	//prints 1 if the button is pressed, else 0
    }
}
```

## Supported Platforms
### BBC Micro:Bit
See branch: **platform/mbit**'s README.md.

## Adding Platforms
I've tried to modularise the changes needed to add a platform as much as possible. See the other branches for examples of how to do this.

(Generally) There are two files that will need changing:

##### GroveCommon

This is the most important. It's got several functions that act as wrapper for platform-specific functionality. **It's important you implement these functions as they're expected to be implemented.**

Feel free to add functionality to this file if required

###### ```analogRead```
This reads 1 byte from an analog pin. The pin read from is the ```pin``` parameter passed to it. This can stay unused if it's not necessary.
###### ```analogWrite```
This writes 1 byte to an analog pin. The pin written to is the ```pin``` parameter passed to it. The value written to the pin is the ```value``` parameter. The ```pin``` can stay unused if it's not necessary.
###### ```digitalRead```
This reads 1 byte from a digital pin. The pin read from is the ```pin``` parameter passed to it. This can stay unused if it's not necessary.
###### ```digitalRead```
This writes 1 byte to a digital pin. The pin written to is the ```pin``` parameter passed to it. The value written to the pin is the ```value``` parameter. The ```pin``` can stay unused if it's not necessary.
###### ```uartRead```
This reads 1 byte via UART serial. The pin read from is the ```rx_pin``` parameter passed to it. This can stay unused if it's not necessary.
###### ```uartWrite```
This writes 1 byte via UART serial. The pin written to is the ```tx_pin``` parameter passed to it. The value written to the pin is the ```value``` parameter. The ```tx_pin``` can stay unused if it's not necessary.

## Authors
- Alexander Collins (alexander-collins@outlook.com)