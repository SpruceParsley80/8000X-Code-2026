

//  Normal adding
// git add .
// git commit -m"this is your message here"
// git push
// To pull it is
// git pull
// froget to pull
// git fetch origin
// git reset --hard origin/main


using namespace vex;




#pragma once




#include "vex.h"




using namespace vex;




extern brain Brain;
extern controller Controller;








// DRIVE
extern motor LeftMiddle;
extern motor LeftBack;
extern motor LeftHalfmotor;




extern motor RightMiddle;
extern motor RightBack;
extern motor RightHalfmotor;




extern motor_group LeftDrive;
extern motor_group RightDrive;




// INTAKE
extern motor Lift1;
extern motor Lift2;
extern motor_group Lift;




// OTHER MOTORS
extern motor Claw1;
extern motor_group Claw;

extern motor toggle;





// PNEUMATICS






void vexcodeInit(void);


const int SCORE_LEVEL_CONSTANT = 10;       // if we use the macro, we will need to tune it
const int ARM_ROTATION_TIME_CONSTANT = 10; // this too
// bool armOut;






void moveLift(int levels);


void toggleArm();


void vexcodeInit();


