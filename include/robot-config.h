using namespace vex;

extern brain Brain;

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





void  vexcodeInit( void );