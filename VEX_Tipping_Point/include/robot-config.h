using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller;
extern triport Expander;

extern motor left_front;
extern motor left_back_one;
extern motor left_back_two;
extern motor right_front;
extern motor right_back_one;
extern motor right_back_two;
extern motor fourbar;
extern motor conv;

extern motor_group left_drive;
extern motor_group right_drive;
extern motor_group Drivetrain;
extern inertial Inertial;

extern encoder encB;
extern encoder encL;
extern encoder encR;

extern digital_out front_claw;
extern digital_out back_claw;
extern digital_out back_tilter;
extern digital_out goal_cover;
extern digital_out fourBarAid;

extern distance distSensorL;
extern distance distSensorR;
extern distance front_distance;

extern limit frontLimit;

extern vision Vision;

extern vision::signature RED;
extern vision::signature BLUE;
extern vision::signature YELLOW;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );