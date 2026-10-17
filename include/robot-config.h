
// Normal adding
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
extern motor LeftFront;
extern motor LeftBack;
extern motor LeftHalf;

extern motor RightFront;
extern motor RightBack;
extern motor RightHalf;

extern motor_group LeftDrive;
extern motor_group RightDrive;

// INTAKE
extern motor Intake1;
extern motor Intake2;
extern motor_group Intake;

// OTHER MOTORS
extern motor ArmBar1;
extern motor ArmBar2;
extern motor_group Armbar;

// PNEUMATICS

extern digital_out Claw_Piston;

void vexcodeInit(void);

const int SCORE_LEVEL_CONSTANT = 10;       // if we use the macro, we will need to tune it
const int ARM_ROTATION_TIME_CONSTANT = 10; // this too
// bool armOut;

void moveLift(int levels);

void toggleArm();

void vexcodeInit();
