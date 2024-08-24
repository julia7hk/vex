#include "vex.h"

using namespace vex;
vex::brain       Brain;
vex::controller Controller1 = vex::controller();

// drivetrain motors
vex::motor FL = vex::motor( vex::PORT3 );
vex::motor BL = vex::motor( vex::PORT11 );
vex::motor FR = vex::motor( vex::PORT7, true );
vex::motor BR = vex::motor( vex::PORT20, true );

// stacker motor
vex::motor ST = vex::motor( vex::PORT21, vex::gearSetting::ratio36_1, false);

// arm motors
vex::motor AL = vex::motor( vex::PORT2, false);
vex::motor AR = vex::motor( vex::PORT9, true);

// elbow motor
vex::motor EL = vex::motor( vex::PORT12, vex::gearSetting::ratio36_1, false);
vex::motor ER = vex::motor( vex::PORT8, vex::gearSetting::ratio36_1, true);

int main() {
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
    AL.spin(vex::directionType::fwd, (Controller1.Axis2.position() + Controller1.Axis1.position())*0.6, vex::velocityUnits::pct); 
    AR.spin(vex::directionType::fwd, (Controller1.Axis2.position() - Controller1.Axis1.position())*0.6, vex::velocityUnits::pct);

    // elbow
    if(Controller1.ButtonL1.pressing()) {
      EL.spin(vex::directionType::fwd, stSpeed, vex::velocityUnits::pct);
      ER.spin(vex::directionType::fwd, stSpeed, vex::velocityUnits::pct);

    }
    else if(Controller1.ButtonL2.pressing()) {
      EL.spin(vex::directionType::rev, elSpeed, vex::velocityUnits::pct);
      ER.spin(vex::directionType::rev, elSpeed, vex::velocityUnits::pct);

    }
    else {
      EL.stop(vex::brakeType::brake);
      ER.stop(vex::brakeType::brake);
      }
    }
  }