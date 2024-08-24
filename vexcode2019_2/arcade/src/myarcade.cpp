#include "vex.h"
#include "myarcade.h"

// driver control code (arcade)
// v0.2.1  -  last updated 9/21/19
void myarcade() {
  Brain.Screen.print("arcade started");
  int stSpeed = 50;
  int elSpeed = 1000;
  while(1) {
    // drivetrain
    FL.spin(vex::directionType::fwd, (Controller1.Axis3.position() + Controller1.Axis4.position())*0.6, vex::velocityUnits::pct); 
    BL.spin(vex::directionType::fwd, (Controller1.Axis3.position() + Controller1.Axis4.position())*0.85, vex::velocityUnits::pct);
    
    FR.spin(vex::directionType::fwd, (Controller1.Axis3.position() - Controller1.Axis4.position())*0.6, vex::velocityUnits::pct);
    BR.spin(vex::directionType::fwd, (Controller1.Axis3.position() - Controller1.Axis4.position())*0.85, vex::velocityUnits::pct);
    
    // stacker
    if(Controller1.ButtonUp.pressing()) {
      ST.spin(vex::directionType::fwd, stSpeed, vex::velocityUnits::pct);
    }
    else {
      if(Controller1.ButtonDown.pressing()) {
        ST.spin(vex::directionType::rev, stSpeed, vex::velocityUnits::pct);
      }
      else {
        ST.stop(vex::brakeType::brake);
      }
    }

    // arms
    AL.spin(vex::directionType::fwd, (Controller1.Axis2.position() + Controller1.Axis1.position()), vex::velocityUnits::pct); 
    AR.spin(vex::directionType::fwd, (Controller1.Axis2.position() - Controller1.Axis1.position()), vex::velocityUnits::pct);

    // elbow
    if(Controller1.ButtonL1.pressing()) {
      EL.spin(vex::directionType::fwd, elSpeed, vex::velocityUnits::pct);
    }
    else if(Controller1.ButtonL2.pressing()) {
      EL.spin(vex::directionType::rev, elSpeed, vex::velocityUnits::pct);
    }
    else {
      EL.stop(vex::brakeType::brake);
    }
  }
  wait(25, msec);
}
