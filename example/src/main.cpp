//========
// MACROS
//========
//includes
#include "MicroBit.h"
#include "grove-drivers/GroveDrivers.h"

//=========
// GLOBALS
//=========
//microbit
MicroBit uBit;
//grove
/* Grove Module Here */

//============
// PROTOTYPES
//============
void init();
void exit();

//======
// MAIN
//======
int main()
{
//init
    init();
    GroveCommon::mBit = &uBit;

//main
    while (1)
    {
        /* Main Loop stuff */
    }

//exit
    exit();
    return EXIT_SUCCESS;
}

//===========
// FUNCTIONS
//===========
void init()
{
    // init MicroBit
    uBit.init();
    // print ready messages
    uBit.serial.printf("RDY\r\n");
    uBit.display.scroll("RDY", 50);
}
void exit()
{
    // print gdbye messages
    uBit.serial.printf("BYE\r\n");
    uBit.display.scroll("BYE", 50);
    // exit MicroBit
    release_fiber();
}

