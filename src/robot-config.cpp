#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

controller Controller = controller(primary);


//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);


//Add your devices below, and don't forget to do the same in robot-config.h:
motor LeftFront = motor(PORT1, ratio18_1, false); // Make sure to set the correct motor carthridge ratio and reversed flag for your motor
motor LeftBack = motor(PORT2, ratio18_1, false);
motor LeftHalf = motor(PORT6, ratio18_1, true); //change half direction if needed

motor RightFront = motor(PORT3, ratio18_1, true);
motor RightBack = motor(PORT4, ratio18_1, true);
motor RightHalf = motor(PORT5, ratio18_1, false);

motor_group LeftDrive = motor_group(LeftFront, LeftBack, LeftHalf);
motor_group RightDrive = motor_group(RightFront, RightBack, RightHalf);
motor Intake1 = motor(PORT1, ratio18_1, false);
motor Intake2 = motor(PORT15, ratio18_1, false);
motor_group Intake = motor_group(Intake1,Intake2);
motor Lift  = motor(PORT13, ratio18_1, false); // If the lift is only one motor
motor Lift2 = motor(PORT8, ratio18_1, false); // If the intake is more than one motor, add them to a motor group
digital_out Winch_Piston = digital_out(Brain.ThreeWirePort.A);
digital_out Claw_Piston = digital_out(Brain.ThreeWirePort.B);
motor_group LiftMotors = motor_group(Lift, Lift2);

//Add your devices below, and don't forget to do the same in robot-config.h:

void vexcodeInit( void ) {
  // nothing to initialize
}