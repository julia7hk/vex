#include "vex.h"
#include "myauton.h"

void myauton_simple() {
  // making sure the code actually runs
  Brain.Screen.print("Simple Auton");

  // motor speeds
  FL.setVelocity(60, vex::velocityUnits::pct);
  FR.setVelocity(60, vex::velocityUnits::pct);
  
  BL.setVelocity(85, vex::velocityUnits::pct);
  BR.setVelocity(85, vex::velocityUnits::pct);
  
  ST.setVelocity(50, vex::velocityUnits::pct);
  
  AL.setVelocity(100, vex::velocityUnits::pct);
  AR.setVelocity(100, vex::velocityUnits::pct);

  EL.setVelocity(100, vex::velocityUnits::pct);

  // lift arms to release

  // EL.spin(directionType::rev, 100, velocityUnits::pct);
  // vex::task::sleep(500);
  // EL.stop();

  // pushing cube

  FL.spin(directionType::rev, 100, velocityUnits::pct);
  FR.spin(directionType::rev, 100, velocityUnits::pct);

  BL.spin(directionType::rev, 100, velocityUnits::pct);
  BR.spin(directionType::rev, 100, velocityUnits::pct);

  vex::task::sleep(3000);
  
  FL.stop();
  FR.stop();

  BL.stop();
  BR.stop();

  // going back

  FL.spin(directionType::fwd, 100, velocityUnits::pct);
  FR.spin(directionType::fwd, 100, velocityUnits::pct);

  BL.spin(directionType::fwd, 100, velocityUnits::pct);
  BR.spin(directionType::fwd, 100, velocityUnits::pct);

  vex::task::sleep(500);
  
  FL.stop();
  FR.stop();

  BL.stop();
  BR.stop();
}

// auton code
// v2.1.0
// void myauton() {
//   // variable for team color
//   // 'r' == red team
//   // 'b' == blue team
//   char color = 'r';  

//   // making sure the code actually runs
//   Brain.Screen.print("Advanced Auton");
  
//   // motor speeds
//   FL.setVelocity(60, vex::velocityUnits::pct);
//   FR.setVelocity(60, vex::velocityUnits::pct);
  
//   BL.setVelocity(85, vex::velocityUnits::pct);
//   BR.setVelocity(85, vex::velocityUnits::pct);
  
//   ST.setVelocity(50, vex::velocityUnits::pct);
  
//   AL.setVelocity(100, vex::velocityUnits::pct);
//   AR.setVelocity(100, vex::velocityUnits::pct);

//   // // lift arms to release

//   // EL.spin(directionType::rev, 100, velocityUnits::pct);
//   // vex::task::sleep(500);
//   // EL.stop();

//   Brain.Screen.print("Grabbing blocks...\n");
//   // make the arms spin to grab blocks
//   AL.spin(directionType::fwd, 100, velocityUnits::pct);
//   AR.spin(directionType::fwd, 100, velocityUnits::pct);

//   // move forward
//   FL.spin(directionType::fwd, 50, velocityUnits::pct);
//   FR.spin(directionType::fwd, 50, velocityUnits::pct);
  
//   BL.spin(directionType::fwd, 50, velocityUnits::pct);
//   BR.spin(directionType::fwd, 50, velocityUnits::pct);

//   vex::task::sleep(2000); // runs for 2 seconds

//   FL.stop();
//   FR.stop();

//   BL.stop();
//   BR.stop();

//   AL.stop();
//   AR.stop();

//   Brain.Screen.print("Turning around...");
//   // turns 180º to turn around
//   FL.spin(directionType::fwd, 50, velocityUnits::pct);
//   FR.spin(directionType::rev, 25, velocityUnits::pct);
  
//   BL.spin(directionType::fwd, 50, velocityUnits::pct);
//   BR.spin(directionType::rev, 25, velocityUnits::pct);

//   vex::task::sleep(1520); 

//   FL.stop();
//   FR.stop();

//   BL.stop();
//   BR.stop();

//   // moves forward
//   FL.spin(directionType::fwd, 50, velocityUnits::pct);
//   FR.spin(directionType::fwd, 50, velocityUnits::pct);
  
//   BL.spin(directionType::fwd, 50, velocityUnits::pct);
//   BR.spin(directionType::fwd, 50, velocityUnits::pct);

//   vex::task::sleep(1875); // runs for 1.875 seconds

//   FL.stop();
//   FR.stop();

//   BL.stop();
//   BR.stop();

//   // turn 90º
//   if (color == 'b') {
//     //turn right
//     Brain.Screen.print("Turning right...");
//     FL.spin(directionType::fwd, 50, velocityUnits::pct);
//     FR.spin(directionType::rev, 25, velocityUnits::pct);
    
//     BL.spin(directionType::fwd, 50, velocityUnits::pct);
//     BR.spin(directionType::rev, 25, velocityUnits::pct);
//   }
//   else {
//     // turn left
//     Brain.Screen.print("Turning left...");
//     FL.spin(directionType::rev, 25, velocityUnits::pct);
//     FR.spin(directionType::fwd, 50, velocityUnits::pct);
    
//     BL.spin(directionType::rev, 25, velocityUnits::pct);
//     BR.spin(directionType::fwd, 50, velocityUnits::pct);
//   }
//   vex::task::sleep(700); 

//   FL.stop();
//   FR.stop();

//   BL.stop();
//   BR.stop();

//   // move forward to goal zone
//   FL.spin(directionType::fwd, 50, velocityUnits::pct);
//   FR.spin(directionType::fwd, 50, velocityUnits::pct);
  
//   BL.spin(directionType::fwd, 50, velocityUnits::pct);
//   BR.spin(directionType::fwd, 50, velocityUnits::pct);

//   vex::task::sleep(300); // runs for .3 seconds

//   FL.stop();
//   FR.stop();

//   BL.stop();
//   BR.stop();

//   // push stacker
//   ST.spin(directionType::rev, 100, velocityUnits::pct);
//   vex::task::sleep(2000);
//   ST.stop();

//   // push cubes forward a little
//   FL.spin(directionType::fwd, 100, velocityUnits::pct);
//   FR.spin(directionType::fwd, 100, velocityUnits::pct);
  
//   BL.spin(directionType::fwd, 100, velocityUnits::pct);
//   BR.spin(directionType::fwd, 100, velocityUnits::pct);

//   vex::task::sleep(200);

//   FL.stop();
//   FR.stop();

//   BL.stop();
//   BR.stop();


//   //spin arms slowly
//   AL.spin(directionType::rev, 5, velocityUnits::pct);
//   AR.spin(directionType::rev, 5, velocityUnits::pct);

//   vex::task::sleep(5000);
  
//   AL.stop();
//   AR.stop();
  
//   // //move forwards
//   // FL.spin(directionType::fwd, 10, velocityUnits::pct);
//   // FR.spin(directionType::fwd, 10, velocityUnits::pct);
  
//   // BL.spin(directionType::fwd, 10, velocityUnits::pct);
//   // BR.spin(directionType::fwd, 10, velocityUnits::pct);

//   // vex::task::sleep(200);

//   // FL.stop();
//   // FR.stop();

//   // BL.stop();
//   // BR.stop();

//   //move backwards while slowly turning
//   // AL.spin(directionType::rev, 5, velocityUnits::pct);
//   // AR.spin(directionType::rev, 5, velocityUnits::pct);

//   FL.spin(directionType::rev, 5, velocityUnits::pct);
//   FR.spin(directionType::rev, 5, velocityUnits::pct);
  
//   BL.spin(directionType::rev, 5, velocityUnits::pct);
//   BR.spin(directionType::rev, 5, velocityUnits::pct);

//   vex::task::sleep(3000);

//   // AL.stop();
//   // AR.stop();

//   FL.stop();
//   FR.stop();

//   BL.stop();
//   BR.stop();



  // //move back more
  // FL.spin(directionType::rev, 50, velocityUnits::pct);
  // FR.spin(directionType::rev, 50, velocityUnits::pct);
  
  // BL.spin(directionType::rev, 50, velocityUnits::pct);
  // BR.spin(directionType::rev, 50, velocityUnits::pct);

  // vex::task::sleep(500); // runs for 0.5 seconds

  // FL.stop();
  // FR.stop();

  // BL.stop();
  // BR.stop();

//   // release blocks
//   ST.spin(directionType::fwd, 50, velocityUnits::pct);
//   vex::task::sleep(1000);
//   ST.stop();

//   AL.spin(directionType::rev, 20, velocityUnits::pct);
//   AR.spin(directionType::rev, 20, velocityUnits::pct);

//   // move backward
//   FL.spin(directionType::rev, 30, velocityUnits::pct);
//   FR.spin(directionType::rev, 30, velocityUnits::pct);
  
//   BL.spin(directionType::rev, 30, velocityUnits::pct);
//   BR.spin(directionType::rev, 30, velocityUnits::pct);

//   vex::task::sleep(1000); // runs for 2.5 seconds

//   AL.stop();
//   AR.stop();

//   FL.stop();
//   FR.stop();

//   BL.stop();
//   BR.stop();

//}
