using namespace vex;

#pragma once

#include "vex.h"

using namespace vex;

extern brain Brain;

<<<<<<< HEAD
extern motor LeftFront;
extern motor LeftBack;
extern motor LeftHalf;

extern motor RightFront;
extern motor RightBack;
extern motor RightHalf;

extern motor_group LeftDrive;
extern motor_group RightDrive;
extern motor Intake1; // Only use this if the intake is one motor or use both intake motors if the intake needs to motors
extern motor Intake2;
extern motor_group Intake;
extern motor Lift;
extern motor Lift2;
extern controller Controller;
extern digital_out Piston;
extern motor_group LiftMotors;


=======
extern controller Controller;

extern motor LeftFront;
extern motor LeftBack;

extern motor RightFront;
extern motor RightBack;

extern motor_group LeftDrive;
extern motor_group RightDrive;

extern motor Intake1;
extern motor Intake2;
extern motor_group Intake;

extern motor Lift;
extern motor Lift2;
extern motor_group LiftMotors;
>>>>>>> e91609323e944759ab97946e9540e270da0991cc



extern digital_out Winch_Piston;
extern digital_out Claw_Piston;


void vexcodeInit(void);

void  vexcodeInit( void );