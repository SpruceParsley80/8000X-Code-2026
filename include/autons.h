#pragma once
#include "JAR-Template/drive.h"

class Drive;

extern Drive chassis;

void default_constants();

// Naming is based off of # of allied loaders on the same side of the single line as the bot

void two_loader_side(); 
void one_loader_side();

void drive_test();
void turn_test();
void swing_test();
void full_test();
void odom_test();
void tank_odom_test();
void holonomic_odom_test();
void match_auton();
