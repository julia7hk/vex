#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
controller Controller1 = controller(primary);
motor FL = motor(PORT4, ratio18_1, false);
motor BL = motor(PORT10, ratio18_1, false);
motor FR = motor(PORT3, ratio18_1, true);
motor BR = motor(PORT19, ratio18_1, true);
motor ST = motor(PORT6, ratio36_1, false);
motor AL = motor(PORT9, ratio18_1, false);
motor AR = motor(PORT8, ratio18_1, true);
motor EL = motor(PORT7, ratio36_1, false);

// VEXcode generated functions
// define variable for remote controller enable/disable
bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}