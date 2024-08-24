// To complete the VEXcode V5 Text project upgrade process, please follow the
// steps below.
// 
// 1. You can use the Robot Configuration window to recreate your V5 devices
//   - including any motors, sensors, 3-wire devices, and controllers.
// 
// 2. All previous code located in main.cpp has now been commented out. You
//   will need to migrate this code to the new "int main" structure created
//   below and keep in mind any new device names you may have set from the
//   Robot Configuration window. 
// 
// If you would like to go back to your original project, a complete backup
// of your original (pre-upgraded) project was created in a backup folder
// inside of this project's folder.

// ---- START VEXCODE CONFIGURED DEVICES ----
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
  
}

// #include "vex.h"
// 
// // ---- START VEXCODE CONFIGURED DEVICES ----
// // Robot Configuration:
// // [Name]               [Type]        [Port(s)]
// // ---- END VEXCODE CONFIGURED DEVICES ----
// 
// using namespace vex;
// vex::brain       Brain;
// vex::controller Controller1 = vex::controller();
// 
// // drivetrain motors
// vex::motor FL = vex::motor( vex::PORT2 );
// vex::motor BL = vex::motor( vex::PORT11 );
// vex::motor FR = vex::motor( vex::PORT9, true );
// vex::motor BR = vex::motor( vex::PORT20, true );
// 
// // stacker motor
// vex::motor ST = vex::motor( vex::PORT19, vex::gearSetting::ratio36_1, false);
// 
// // arm motors
// vex::motor AL = vex::motor( vex::PORT1, false);
// vex::motor AR = vex::motor( vex::PORT10, true);
// 
// // elbow motor
// vex::motor EL = vex::motor( vex::PORT12, vex::gearSetting::ratio36_1, false);
// 
// vex::competition Competition;
// 
// // pre auton code
// // v0.1.0
// void pre_auton( void ) {
//   
// }
// 
// // auton code
// // v2.1.0
// void autonomous( void ) {
//   // making sure the code actually runs
//   Brain.Screen.print("beans");
// 
//   // motor speeds
//   FL.setVelocity(60, vex::velocityUnits::pct);
//   FR.setVelocity(60, vex::velocityUnits::pct);
//   
//   BL.setVelocity(85, vex::velocityUnits::pct);
//   BR.setVelocity(85, vex::velocityUnits::pct);
//   
//   ST.setVelocity(50, vex::velocityUnits::pct);
//   
//   AL.setVelocity(100, vex::velocityUnits::pct);
//   AR.setVelocity(100, vex::velocityUnits::pct);
// 
//   EL.setVelocity(100, vex::velocityUnits::pct);
// 
//   // lift arms to release
// 
//   EL.spin(directionType::fwd, 100, velocityUnits::pct);
// 
//   vex::task::sleep(2000);
// 
//   EL.stop();
// 
//   // pushing cube
// 
//   FL.spin(directionType::fwd, 100, velocityUnits::pct);
//   FR.spin(directionType::fwd, 100, velocityUnits::pct);
// 
//   BL.spin(directionType::fwd, 100, velocityUnits::pct);
//   BR.spin(directionType::fwd, 100, velocityUnits::pct);
// 
//   vex::task::sleep(2000);
//   
//   FL.stop();
//   FR.stop();
// 
//   BL.stop();
//   BR.stop();
// 
//   // // making sure the code actually runs
//   // Brain.Screen.print("beans");
//   
// 
//   // // motor speeds
//   // FL.setVelocity(60, vex::velocityUnits::pct);
//   // FR.setVelocity(60, vex::velocityUnits::pct);
//   
//   // BL.setVelocity(85, vex::velocityUnits::pct);
//   // BR.setVelocity(85, vex::velocityUnits::pct);
//   
//   // ST.setVelocity(50, vex::velocityUnits::pct);
//   
//   // AL.setVelocity(100, vex::velocityUnits::pct);
//   // AR.setVelocity(100, vex::velocityUnits::pct);
// 
//   // // collect blocks
//   // AL.spin(directionType::fwd, 50, velocityUnits::pct);
//   // AR.spin(directionType::fwd, 50, velocityUnits::pct); 
// 
//   // vex::task::sleep(3000);
//   
//   // AL.stop();
//   // AR.stop();
// 
//   // // make the arms spin to grab blocks
//   // AL.spin(directionType::fwd, 50, velocityUnits::pct);
//   // AR.spin(directionType::fwd, 50, velocityUnits::pct);
// 
//   // // pause to collect starting block
//   // vex::task::sleep(1000);
// 
//   // // move forward
//   // FL.spin(directionType::fwd, 50, velocityUnits::pct);
//   // FR.spin(directionType::fwd, 50, velocityUnits::pct);
//   
//   // BL.spin(directionType::fwd, 50, velocityUnits::pct);
//   // BR.spin(directionType::fwd, 50, velocityUnits::pct);
// 
//   // vex::task::sleep(2500); // runs for 2.5 seconds
// 
//   // FL.stop();
//   // FR.stop();
// 
//   // BL.stop();
//   // BR.stop();
// 
//   // // stop the arms from spinning b/c we don't need them anymore
//   // AL.stop();
//   // AR.stop();
// 
//   // // turns 180º to turn around
//   // FL.spin(directionType::fwd, 50, velocityUnits::pct);
//   // FR.spin(directionType::rev, 25, velocityUnits::pct);
//   
//   // BL.spin(directionType::fwd, 50, velocityUnits::pct);
//   // BR.spin(directionType::rev, 25, velocityUnits::pct);
// 
//   // vex::task::sleep(1650); 
// 
//   // FL.stop();
//   // FR.stop();
// 
//   // BL.stop();
//   // BR.stop();
// 
//   // // moves forward
//   // FL.spin(directionType::fwd, 50, velocityUnits::pct);
//   // FR.spin(directionType::rev, 50, velocityUnits::pct);
//   
//   // BL.spin(directionType::fwd, 50, velocityUnits::pct);
//   // BR.spin(directionType::rev, 50, velocityUnits::pct);
// 
//   // vex::task::sleep(1000); // runs for 1 second
// 
//   // FL.stop();
//   // FR.stop();
// 
//   // BL.stop();
//   // BR.stop();
// 
//   // // turn 45º left
//   // FL.spin(directionType::fwd, 25, velocityUnits::pct);
//   // FR.spin(directionType::rev, 50, velocityUnits::pct);
//   
//   // BL.spin(directionType::fwd, 25, velocityUnits::pct);
//   // BR.spin(directionType::rev, 50, velocityUnits::pct);
// 
//   // vex::task::sleep(425); 
// 
//   // FL.stop();
//   // FR.stop();
// 
//   // BL.stop();
//   // BR.stop();
// 
//   // // move to goal zone
//   // FL.spin(directionType::fwd, 50, velocityUnits::pct);
//   // FR.spin(directionType::rev, 50, velocityUnits::pct);
//   
//   // BL.spin(directionType::fwd, 50, velocityUnits::pct);
//   // BR.spin(directionType::rev, 50, velocityUnits::pct);
// 
//   // vex::task::sleep(750); // runs for .75 seconds
// 
//   // FL.stop();
//   // FR.stop();
// 
//   // BL.stop();
//   // BR.stop();
// 
//   // // release blocks
//   // ST.spin(directionType::fwd, 50, velocityUnits::pct);
//   // vex::task::sleep(1000);
//   // ST.stop();
// 
//   // AL.spin(directionType::rev, 20, velocityUnits::pct);
//   // AR.spin(directionType::rev, 20, velocityUnits::pct);
// 
//   // // move backward
//   // FL.spin(directionType::rev, 30, velocityUnits::pct);
//   // FR.spin(directionType::rev, 30, velocityUnits::pct);
//   
//   // BL.spin(directionType::rev, 30, velocityUnits::pct);
//   // BR.spin(directionType::rev, 30, velocityUnits::pct);
// 
//   // vex::task::sleep(1000); // runs for 2.5 seconds
// 
//   // AL.stop();
//   // AR.stop();
// 
//   // FL.stop();
//   // FR.stop();
// 
//   // BL.stop();
//   // BR.stop();  // BL.stop();
//   // BR.stop();
// 
//   // // release blocks
//   // ST.spin(directionType::fwd, 50, velocityUnits::pct);
//   // vex::task::sleep(1000);
//   // ST.stop();
// 
//   // AL.spin(directionType::rev, 20, velocityUnits::pct);
//   // AR.spin(directionType::rev, 20, velocityUnits::pct);
// 
//   // // move backward
//   // FL.spin(directionType::rev, 30, velocityUnits::pct);
//   // FR.spin(directionType::rev, 30, velocityUnits::pct);
//   
//   // BL.spin(directionType::rev, 30, velocityUnits::pct);
//   // BR.spin(directionType::rev, 30, velocityUnits::pct);
// 
//   // vex::task::sleep(1000); // runs for 2.5 seconds
// 
//   // AL.stop();
//   // AR.stop();
// 
//   // FL.stop();
//   // FR.stop();
// 
//   // BL.stop();
//   // BR.stop();
// }
// 
// // driver control code (arcade)
// // v0.2.1  -  last updated 9/21/19
// void usercontrol( void ) {
//   Brain.Screen.print("arcade started");
//   int stSpeed = 50;
//   int elSpeed = 1000;
//   while(1) {
//     // drivetrain
//     FL.spin(vex::directionType::fwd, (Controller1.Axis3.position() + Controller1.Axis4.position())*0.6, vex::velocityUnits::pct); 
//     BL.spin(vex::directionType::fwd, (Controller1.Axis3.position() + Controller1.Axis4.position())*0.85, vex::velocityUnits::pct);
//     
//     FR.spin(vex::directionType::fwd, (Controller1.Axis3.position() - Controller1.Axis4.position())*0.6, vex::velocityUnits::pct);
//     BR.spin(vex::directionType::fwd, (Controller1.Axis3.position() - Controller1.Axis4.position())*0.85, vex::velocityUnits::pct);
//     
//     // stacker
//     if(Controller1.ButtonUp.pressing()) {
//       ST.spin(vex::directionType::fwd, stSpeed, vex::velocityUnits::pct);
//     }
//     else {
//       if(Controller1.ButtonDown.pressing()) {
//         ST.spin(vex::directionType::rev, stSpeed, vex::velocityUnits::pct);
//       }
//       else {
//         ST.stop(vex::brakeType::brake);
//       }
//     }
// 
//     // arms
//     AL.spin(vex::directionType::fwd, (Controller1.Axis2.position() + Controller1.Axis1.position())*0.6, vex::velocityUnits::pct); 
//     AR.spin(vex::directionType::fwd, (Controller1.Axis2.position() - Controller1.Axis1.position())*0.6, vex::velocityUnits::pct);
// 
//     // elbow
//     if(Controller1.ButtonL1.pressing()) {
//       EL.spin(vex::directionType::fwd, elSpeed, vex::velocityUnits::pct);
// 
//     }
//     else if(Controller1.ButtonL2.pressing()) {
//       EL.spin(vex::directionType::rev, elSpeed, vex::velocityUnits::pct);
//     }
//     else {
//       EL.stop(vex::brakeType::brake);
//       }
//     }
//   }
// 
// // do not touch
// int main() {
//   Competition.autonomous( autonomous );
//   Competition.drivercontrol( usercontrol );
//   
//   pre_auton();
// }   