#include "vex.h"

using namespace vex;
vex::brain       Brain;
vex::controller Controller1 = vex::controller();

// drivetrain motors
vex::motor FL = vex::motor( vex::PORT2 );
vex::motor BL = vex::motor( vex::PORT11 );
vex::motor FR = vex::motor( vex::PORT9, true );
vex::motor BR = vex::motor( vex::PORT20, true );

// stacker motor
vex::motor ST = vex::motor( vex::PORT19, vex::gearSetting::ratio36_1, false);

// arm motors
vex::motor AL = vex::motor( vex::PORT1, false);
vex::motor AR = vex::motor( vex::PORT10, true);

// elbow motor
vex::motor EL = vex::motor( vex::PORT12, vex::gearSetting::ratio36_1, false);
vex::motor ER = vex::motor( vex::PORT8, vex::gearSetting::ratio36_1, true);

vex::competition Competition;

// pre auton code
// v0.1.0  -  created 9/21/19 (change to last updated once someone writes the auton)
void pre_auton( void ) {
  // i don't think we need a pre auton..?
}

// auton code
// v0.1.0  -  created 9/21/19 (change to last updated once someone writes the auton)
void autonomous( void ) {
    // making sure the code actually runs
    Brain.Screen.print("beans");

    // variables
    // int tile = -2;

    // motor speeds
    FL.setVelocity(60, vex::velocityUnits::pct);
    FR.setVelocity(60, vex::velocityUnits::pct);
    
    BL.setVelocity(85, vex::velocityUnits::pct);
    BR.setVelocity(85, vex::velocityUnits::pct);
    
    ST.setVelocity(50, vex::velocityUnits::pct);
    
    AL.setVelocity(100, vex::velocityUnits::pct);
    AR.setVelocity(100, vex::velocityUnits::pct);

    EL.setVelocity(100, vex::velocityUnits::pct);
    ER.setVelocity(100, vex::velocityUnits::pct);

    // release the arms
    AL.spin(directionType::rev, 50, velocityUnits::pct);
    AR.spin(directionType::rev, 50, velocityUnits::pct);

    vex::task::sleep(125); 

    AL.stop();
    AR.stop();

    // release the stacker elbow
    ST.spin(directionType::rev, 50, velocityUnits::pct);

    vex::task::sleep(125); 

    AL.stop();
    AR.stop();

    // making the motors move
    FL.spin(directionType::fwd, 50, velocityUnits::pct);
    FR.spin(directionType::fwd, 50, velocityUnits::pct);

    BL.spin(directionType::rev, 50, velocityUnits::pct);
    BR.spin(directionType::rev, 50, velocityUnits::pct);

    // the motors will run for ____ miliseconds (1 sec = 1000)
    vex::task::sleep(2000); 

    // making the motors stop
    FL.stop();
    FR.stop();
    BL.stop();
    BR.stop();
}

// driver control code (arcade)
// v0.2.1  -  last updated 9/21/19
void usercontrol( void ) {
  Brain.Screen.print("arcade started");

  while(1) {
    // drivetrain
    FL.spin(vex::directionType::fwd, (Controller1.Axis3.position() + Controller1.Axis4.position())*0.6, vex::velocityUnits::pct); 
    BL.spin(vex::directionType::fwd, (Controller1.Axis3.position() + Controller1.Axis4.position())*0.85, vex::velocityUnits::pct);
    
    FR.spin(vex::directionType::fwd, (Controller1.Axis3.position() - Controller1.Axis4.position())*0.6, vex::velocityUnits::pct);
    BR.spin(vex::directionType::fwd, (Controller1.Axis3.position() - Controller1.Axis4.position())*0.85, vex::velocityUnits::pct);
    
    // stacker
    int stSpeed = 100;
    if(Controller1.ButtonUp.pressing()) {
      ST.spin(vex::directionType::fwd, stSpeed, vex::velocityUnits::pct);
    }
    else if(Controller1.ButtonUp.pressing()) {
      ST.spin(vex::directionType::rev, stSpeed, vex::velocityUnits::pct);
    }
    else {
      ST.stop(vex::brakeType::brake);
    }

    // arms
    AL.spin(vex::directionType::fwd, (Controller1.Axis2.position() + Controller1.Axis1.position())*0.6, vex::velocityUnits::pct); 
    AR.spin(vex::directionType::fwd, (Controller1.Axis2.position() - Controller1.Axis1.position())*0.6, vex::velocityUnits::pct);

    // elbow
    int elbowSpeed = 100;
    if(Controller1.ButtonL1.pressing()) {
      EL.spin(vex::directionType::fwd, elbowSpeed, vex::velocityUnits::pct);
      ER.spin(vex::directionType::fwd, elbowSpeed, vex::velocityUnits::pct);
    }
    else if(Controller1.ButtonL2.pressing()) {
      EL.spin(vex::directionType::rev, elbowSpeed, vex::velocityUnits::pct);
      ER.spin(vex::directionType::rev, elbowSpeed, vex::velocityUnits::pct);
    }
    else {
      EL.stop(vex::brakeType::brake);
      ER.stop(vex::brakeType::brake);
    }

    // special functions

    // A button (take in cubes)
    int armSpeed = 100;
    if(Controller1.ButtonA.pressing()) {
      AL.spin(directionType::rev, armSpeed, velocityUnits::pct);
      AR.spin(directionType::rev, armSpeed, velocityUnits::pct);
    }

    if(Controller1.ButtonB.pressing()) {
      AL.spin(directionType::rev, armSpeed, velocityUnits::pct);
      AR.spin(directionType::rev, armSpeed, velocityUnits::pct);
    }
  }
}

// do not touch
int main() {
  Competition.autonomous( autonomous );
  Competition.drivercontrol( usercontrol );
  
  pre_auton();
}
