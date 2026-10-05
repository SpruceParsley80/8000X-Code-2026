#pragma once

#include "vex.h"

extern vex::brain Brain;

extern vex::controller Controller;

extern vex::motor LeftFront;
extern vex::motor LeftBack;
extern vex::motor LeftHalf;

extern vex::motor RightFront;
extern vex::motor RightBack;
extern vex::motor RightHalf;

extern vex::motor elbow;

extern vex::motor_group LeftDrive;
extern vex::motor_group RightDrive;

extern vex::motor Intake1;
extern vex::motor Intake2;
extern vex::motor_group Intake;

extern vex::digital_out Winch_Piston;
extern vex::digital_out Claw_Piston;

const int SCORE_LEVEL_CONSTANT = 10;       // if we use the macro, we will need to tune it
const int ARM_ROTATION_TIME_CONSTANT = 10; // this too
// bool armOut;

void vexcodeInit();

void moveLift(int levels);

void toggleArm();

void vexcodeInit();
