using namespace vex;

extern brain Brain;

//To set up a motor called LeftFront here, you'd use
//extern motor LeftFront;

//Add your devices below, and don't forget to do the same in robot-config.cpp:

extern inertial Intertial;

extern motor leftMotorA;
extern motor leftMotorB;
extern motor leftMotorC;
extern motor_group LeftDriveSmart;

extern motor rightMotorA;
extern motor rightMotorB;
extern motor rightMotorC;
extern motor_group RightDriveSmart;

extern controller Controller1;

extern digital_out back;
extern digital_out matchLoad;
extern digital_out Gate;

extern motor intakeAlt;
extern motor intakeOrta;
extern motor intakeUst;

enum TeamColor { RED, BLUE, UNKNOWN };
extern TeamColor teamColor;

extern optical Optical;

void  vexcodeInit( void );