using namespace vex;

#pragma once

#include "vex.h"

using namespace vex;

extern brain Brain;

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



extern digital_out Winch_Piston;
extern digital_out Claw_Piston;


void vexcodeInit(void);

void  vexcodeInit( void );