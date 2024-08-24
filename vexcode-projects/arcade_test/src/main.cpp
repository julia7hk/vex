/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       VEX                                                       */
/*    Created:      Mon Mar 25 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/
// Arcade Control 
// This program instructs your robot to use remote control values to move the robot. 
//
// Robot Configuration: 
// [Smart Port]    [Name]        [Type]           [Description]       [Reversed]
// Motor Port 1    LeftMotor     V5 Smart Motor    Left side motor     false
// Motor Port 10   RightMotor    V5 Smart Motor    Right side motor    true
// Motor Port 8    ArmMotor      V5 Smart Motor    Arm motor           false
// Motor Port 3    ClawMotor     V5 Smart Motor    Claw motor          false
//
#include "vex.h"

using namespace vex;

// A global instance of vex::brain used for printing to the V5 brain screen
vex::brain       Brain;

// define your global instances of motors and other devices here
vex::motor FL = vex::motor( vex::PORT10 );
vex::motor BL = vex::motor( vex::PORT1 );
vex::motor FR = vex::motor( vex::PORT20, true );
vex::motor BR = vex::motor( vex::PORT11, true );
vex::controller Controller1 = vex::controller();

int main() {
    // Display that the program has started to the screen.
    Brain.Screen.print("Arcade Control Program Started");
    
    // Create an infinite loop so that the program can pull remote control values every iteration.
    // This loop causes the program to run forever.
    while(1) {
      // Drive Control
      // Set the left and right motor to spin forward using the controller's Axis position as the velocity value.
      // Since we are using a single joystick, we will need to calculate the final volicity for each motor.
    
      // (Axis3+Axis4)/2
      FL.spin(vex::directionType::fwd, (Controller1.Axis3.position() + Controller1.Axis4.position())/2, vex::velocityUnits::pct); 
      BL.spin(vex::directionType::fwd, (Controller1.Axis3.position() + Controller1.Axis4.position())/2, vex::velocityUnits::pct);
      // (Axis3-Axis4)/2
      FR.spin(vex::directionType::fwd, (Controller1.Axis3.position() - Controller1.Axis4.position())/2, vex::velocityUnits::pct);
      BR.spin(vex::directionType::fwd, (Controller1.Axis3.position() - Controller1.Axis4.position())/2, vex::velocityUnits::pct);

    }
}
