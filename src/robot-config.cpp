#include "vex.h"


using namespace vex;
using signature = vision::signature;
using code = vision::code;


brain Brain;
controller Controller = controller(primary);








// ================= DRIVE =================


// Right SIDE
motor RightFront = motor(PORT4,  ratio6_1, false);
motor RightBack  = motor(PORT14, ratio6_1, false);
motor RightHalf  = motor(PORT13, ratio6_1, false);


// Left SIDE
motor LeftFront = motor(PORT12, ratio6_1, true);
motor LeftBack  = motor(PORT3,  ratio6_1, true);
motor LeftHalf  = motor(PORT2,  ratio6_1, true);


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
motor Intake1 = motor(PORT5, ratio6_1, false);
motor Intake2 = motor(PORT15, ratio6_1, false);


motor_group Intake = motor_group(
   Intake1,
   Intake2
);




// ================= OTHER MOTORS =================
motor ArmBar1 = motor(PORT9, ratio6_1, false);
motor ArmBar2 = motor(PORT19, ratio6_1, true);




motor_group Armbar = motor_group(
   ArmBar1,
   ArmBar2
);




// ================= PNEUMATICS =================






digital_out Claw_Piston = digital_out(Brain.ThreeWirePort.A);




// ================= INITIALIZATION =================


void vexcodeInit(void) {
   // nothing to initialize
}

// A simple, probably not actually functional macro thing for lifting the lift in units of cups
void moveLift(int levels) {
  if (levels >= 0) {
    Intake.spin(vex::forward);
    wait(levels * SCORE_LEVEL_CONSTANT, vex::msec);
    Intake.stop(vex::brake);
    
  } else {
    Intake.spin(vex::reverse);
    wait(levels * SCORE_LEVEL_CONSTANT, vex::msec);
    Intake.stop(vex::brake);
  }
}


