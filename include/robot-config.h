using namespace vex;

#pragma once

#include "vex.h"

using namespace vex;

extern brain Brain;

extern controller Controller;

extern motor LeftFront;
extern motor LeftBack;
extern motor LeftHalf;

extern motor RightFront;
extern motor RightBack;
extern motor RightHalf;

extern motor elbow;

extern motor_group LeftDrive;
extern motor_group RightDrive;

extern motor Intake1;
extern motor Intake2;
extern motor_group Intake;

extern digital_out Winch_Piston;
extern digital_out Claw_Piston;

const int SCORE_LEVEL_CONSTANT = 10; // If we use the macro, we will need to tune it
const int ARM_ROTATION_TIME_CONSTANT = 10; // This too
// bool armOut;

void vexcodeInit();

void moveLift(int);

void toggleArm();

void vexcodeInit();
