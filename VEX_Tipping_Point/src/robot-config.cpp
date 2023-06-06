#include "vex.h"

using namespace vex;

// A global instance of brain used for printing to the V5 brain screen
brain Brain;
controller Controller = controller(primary);
triport Expander = triport(PORT1);

//  Motors
//  Drivetrain
motor left_front = motor(PORT11, ratio6_1, true);
motor left_back_one = motor(PORT2, ratio6_1, true);
motor left_back_two = motor(PORT6, ratio6_1, false);
motor right_front = motor(PORT8, ratio6_1, false);
motor right_back_one = motor(PORT18, ratio6_1, false);
motor right_back_two = motor(PORT15, ratio6_1, true);

motor_group left_drive = motor_group(left_front, left_back_one, left_back_two);
motor_group right_drive = motor_group(right_front, right_back_one, right_back_two);
motor_group Drivetrain = motor_group(left_front, left_back_one, left_back_two, right_front, right_back_one, right_back_two);

//  Four-bar
motor fourbar = motor(PORT21, ratio18_1, false);

// Conveyor
motor conv = motor(PORT19, ratio6_1, true);


//Sensors
// Inertial
inertial Inertial = inertial(PORT20);

// Optical shaft encoders
encoder encB = encoder(Expander.E); //E
encoder encR = encoder(Expander.G); //G
encoder encL = encoder(Expander.A); //A

// Color sensor
//color back_optic = color(Brain.ThreeWirePort.D);

// Pneumatics
digital_out front_claw = pneumatics(Brain.ThreeWirePort.A);
digital_out back_claw = pneumatics(Brain.ThreeWirePort.C);
digital_out back_tilter = pneumatics(Brain.ThreeWirePort.B);

digital_out goal_cover = pneumatics(Brain.ThreeWirePort.D);

digital_out fourBarAid = pneumatics(Brain.ThreeWirePort.H);

// Distance
distance distSensorL = distance(PORT1);
distance distSensorR = distance(PORT2);
distance front_distance = distance(PORT11);

limit frontLimit = limit(Expander.C);

bool RemoteControlCodeEnabled = true;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  Controller.Screen.print("Device initialization...");
  Controller.Screen.setCursor(2, 1);
  // calibrate the drivetrain gyro
  wait(200);
  Inertial.calibrate();
  Controller.Screen.print("Calibrating Gyro for Drivetrain");
  // wait for the gyro calibration process to finish
  while (Inertial.isCalibrating()) {
    wait(25);
  }
  // reset the screen now that the calibration is complete
  Controller.Screen.clearScreen();
  Controller.Screen.setCursor(1,1);
  wait(50);
  Controller.Screen.clearScreen();
}