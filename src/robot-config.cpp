#include "vex.h"





using namespace vex;
using signature = vision::signature;
using code = vision::code;




brain Brain;
controller Controller = controller(primary);
















// ================= DRIVE =================




// Right SIDE
//full motor 
motor RightFront = motor(PORT13,  ratio6_1, false); //13 -> 13
motor RightBack  = motor(PORT15, ratio6_1, false);
//half motor
motor RightHalfmotor  = motor(PORT18, ratio18_1, false);




// Left SIDE
//full motor
motor LeftFront = motor(PORT19, ratio6_1, true);
motor LeftBack  = motor(PORT17,  ratio6_1, true);
// half motor
motor LeftHalfmotor  = motor(PORT2,  ratio18_1, true); //20  -> 2 b/c 20 no 




motor_group LeftDrive = motor_group(
  LeftFront,
  LeftBack,
  LeftHalfmotor
);




motor_group RightDrive = motor_group(
  RightFront,
  RightBack,
  RightHalfmotor
);












// ================= INTAKE =================
// it is supposed to be 5 but fr rightnow i am chqging it for the intertial sensor to work properly
motor Lift1 = motor(PORT10, ratio18_1, false);
motor Lift2 = motor(PORT9, ratio18_1, true);




motor_group Lift = motor_group(
  Lift1,
  Lift2
);








// ================= OTHER MOTORS =================


motor Claw1 = motor(PORT5, ratio6_1, false); //change as needed

motor_group Claw = motor_group(Claw1);

motor toggle = motor(PORT7, ratio18_1, false);

distance backDistance = distance(PORT4);


















// ================= PNEUMATICS =================


//not used but i dont want to delete right now














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