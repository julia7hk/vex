/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       michael                                                   */
/*    Created:      Mon Jan 06 2020                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
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
#include "myauton.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  myauton_simple();
  //myauton();
}
