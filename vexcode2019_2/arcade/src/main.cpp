/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Wed Sep 25 2019                                           */
/*    Description:  Right Arcade                                              */
/*    This sample allows you to control the V5 Clawbot using the right        */
/*    joystick. Adjust the deadband value for more accurate movements.        */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Controller1          controller                    
// FL                   motor         4               
// BL                   motor         10              
// FR                   motor         3               
// BR                   motor         19              
// ST                   motor         6               
// AL                   motor         9               
// AR                   motor         8               
// EL                   motor         7               
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"
#include "myarcade.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();

  myarcade();
}
