#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

controller Controller = controller(primary);

// The motor constructor takes motors as (port, ratio, reversed), so for example
// motor LeftFront = motor(PORT1, ratio6_1, false);

// Add your devices below, and don't forget to do the same in robot-config.h:
motor LeftFront = motor(PORT1, ratio18_1, false); // Make sure to set the correct motor carthridge ratio and reversed flag for your motor
motor LeftBack = motor(PORT2, ratio18_1, false);
motor LeftHalf = motor(PORT6, ratio18_1, true); // Change half direction if needed

motor elbow = motor(PORT16, ratio18_1, false);

motor RightFront = motor(PORT3, ratio18_1, true);
motor RightBack = motor(PORT4, ratio18_1, true);
motor RightHalf = motor(PORT5, ratio18_1, false);

motor_group LeftDrive = motor_group(LeftFront, LeftBack, LeftHalf);
motor_group RightDrive = motor_group(RightFront, RightBack, RightHalf);
motor Intake1 = motor(PORT1, ratio18_1, false);
motor Intake2 = motor(PORT15, ratio18_1, false);
motor_group Intake = motor_group(Intake1,Intake2);
digital_out Winch_Piston = digital_out(Brain.ThreeWirePort.A);
digital_out Claw_Piston = digital_out(Brain.ThreeWirePort.B);

// Add your devices below, and don't forget to do the same in robot-config.h:

void vexcodeInit() {
  // Nothing to initialize
}

// A simple, probably not actually functional macro thing for lifting the lift in units of cups
void moveLift(int levels) {
  if (levels >= 0) {
    Winch_Piston.set(1);
    Intake.spin(forward);
    wait(levels * SCORE_LEVEL_CONSTANT, msec);
    Intake.stop(brake);
    Winch_Piston.set(0);
  } else {
    Winch_Piston.set(1);
    Intake.spin(reverse);
    wait(levels * SCORE_LEVEL_CONSTANT, msec);
    Intake.stop(brake);
    Winch_Piston.set(0);
  }
}

// void toggleArm() {
//   if (armOut) {
//     elbow.spin(forward);
//     wait(ARM_ROTATION_TIME_CONSTANT, msec);
//     elbow.stop(brake);
//   } else {
//     elbow.spin(reverse);
//     wait(ARM_ROTATION_TIME_CONSTANT, msec);
//     elbow.stop(brake);
//   }
// }
