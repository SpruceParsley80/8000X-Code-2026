#include "vex.h"

// A global instance of brain used for printing to the V5 Brain screen.
vex::brain Brain;

vex::controller Controller = vex::controller(vex::primary);

bool armOut;

// The motor constructor takes motors as (port, ratio, reversed), so for example
// motor LeftFront = motor(PORT1, ratio6_1, false);

// Add your devices below, and don't forget to do the same in robot-config.h:
vex::motor LeftFront = vex::motor(vex::PORT1, vex::ratio18_1, false); // Make sure to set the correct motor carthridge ratio and reversed flag for your motor
vex::motor LeftBack = vex::motor(vex::PORT2, vex::ratio18_1, false);
vex::motor LeftHalf = vex::motor(vex::PORT6, vex::ratio18_1, true); // change half direction if needed

vex::motor elbow = vex::motor(vex::PORT16, vex::ratio18_1, false);

vex::motor RightFront = vex::motor(vex::PORT3, vex::ratio18_1, true);
vex::motor RightBack = vex::motor(vex::PORT4, vex::ratio18_1, true);
vex::motor RightHalf = vex::motor(vex::PORT5, vex::ratio18_1, false);

vex::motor_group LeftDrive = vex::motor_group(LeftFront, LeftBack, LeftHalf);
vex::motor_group RightDrive = vex::motor_group(RightFront, RightBack, RightHalf);
vex::motor Intake1 = vex::motor(vex::PORT1, vex::ratio18_1, false);
vex::motor Intake2 = vex::motor(vex::PORT15, vex::ratio18_1, false);
vex::motor_group Intake = vex::motor_group(Intake1, Intake2);
vex::digital_out Winch_Piston = vex::digital_out(Brain.ThreeWirePort.A);
vex::digital_out Claw_Piston = vex::digital_out(Brain.ThreeWirePort.B);

// Add your devices below, and don't forget to do the same in robot-config.h:

void vexcodeInit() {
  // nothing to initialize
}

// A simple, probably not actually functional macro thing for lifting the lift in units of cups
void moveLift(int levels) {
  if (levels >= 0) {
    Winch_Piston.set(1);
    Intake.spin(vex::forward);
    wait(levels * SCORE_LEVEL_CONSTANT, vex::msec);
    Intake.stop(vex::brake);
    Winch_Piston.set(0);
  } else {
    Winch_Piston.set(1);
    Intake.spin(vex::reverse);
    wait(levels * SCORE_LEVEL_CONSTANT, vex::msec);
    Intake.stop(vex::brake);
    Winch_Piston.set(0);
  }
}

void toggleArm() {
  if (armOut) {
    elbow.spin(vex::forward);
    wait(ARM_ROTATION_TIME_CONSTANT, vex::msec);
    elbow.stop(vex::brake);
  } else {
    elbow.spin(vex::reverse);
    wait(ARM_ROTATION_TIME_CONSTANT, vex::msec);
    elbow.stop(vex::brake);
  }
}
