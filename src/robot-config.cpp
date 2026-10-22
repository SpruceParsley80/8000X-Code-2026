#include "vex.h"





using namespace vex;
using signature = vision::signature;
using code = vision::code;




brain Brain;
controller Controller = controller(primary);
















// ================= DRIVE =================




// Right SIDE
motor RightFront = motor(PORT12,  ratio6_1, false);
motor RightBack  = motor(PORT11, ratio6_1, false);
motor RightHalf  = motor(PORT13, ratio6_1, false);




// Left SIDE
motor LeftFront = motor(PORT2, ratio6_1, true);
motor LeftBack  = motor(PORT4,  ratio6_1, true);
motor LeftHalf  = motor(PORT3,  ratio6_1, true);




motor_group LeftDrive = motor_group(
  LeftFront,
  LeftBack,
  LeftHalf
);




motor_group RightDrive = motor_group(
  RightFront,
  RightBack,
  RightHalf
);












// ================= INTAKE =================
// it is supposed to be 5 but fr rightnow i am chqging it for the intertial sensor to work properly
motor Lift1 = motor(PORT5, ratio6_1, false);
motor Lift2 = motor(PORT15, ratio6_1, true);




motor_group Lift = motor_group(
  Lift1,
  Lift2
);








// ================= OTHER MOTORS =================
motor ArmBar1 = motor(PORT10, ratio6_1, false);
motor ArmBar2 = motor(PORT20, ratio6_1, true);








motor_group Armbar = motor_group(
  ArmBar1,
  ArmBar2
);








// ================= PNEUMATICS =================












digital_out Claw_Piston = digital_out(Brain.ThreeWirePort.B);








// ================= INITIALIZATION =================




void vexcodeInit(void) {
  // nothing to initialize
}


// A simple, probably not actually functional macro thing for lifting the lift in units of cups
void moveLift(int levels) {
 if (levels >= 0) {
   Lift.spin(vex::forward);
   wait(levels * SCORE_LEVEL_CONSTANT, vex::msec);
   Lift.stop(vex::brake);
  
 } else {
   Lift.spin(vex::reverse);
   wait(levels * SCORE_LEVEL_CONSTANT, vex::msec);
   Lift.stop(vex::brake);
 }
}






