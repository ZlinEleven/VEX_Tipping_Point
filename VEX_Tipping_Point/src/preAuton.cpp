#include "vex.h"

int DTtimer = 0;
int Timer1() {
  while (1) {
    DTtimer += 1;
    wait(1);
  }
}
int T2 = 0;
int Timer2() {
  while (1) {
    T2 += 1;
    wait(1);
  }
}
int absTimer = 0;
int absTimer1() {
  while (1) {
    absTimer += 1;
    wait(1);
  }
}


float motorValue(motor motorname) {return motorname.rotation(rotationUnits::deg);}
float opticValue(optical sensor) { return sensor.hue(); }
float lineValue(line sensor) { return sensor.value(analogUnits::mV); }
float lineValuePCT(line sensor) { return sensor.value(analogUnits::pct); }
float encValue(encoder sensor) { return sensor.rotation(rotationUnits::deg); }
float potValue(pot sensor) { return sensor.value(rotationUnits::deg); }
float clawValue(pneumatics claw) { return claw.value(); }

double pi = 3.14159265;

double RADIAN_TO_DEGREES(double radian) { return radian * 180 / pi; }
double DEGREES_TO_RADIAN(double degrees) { return degrees * pi / 180; }



double TICKS_PER_INCH = 90.33;
double getInches(double num) { return num / TICKS_PER_INCH; }

double keepInRange360(double num) {
  while (num >= 360 || num < 0) {
    if (num < 0) {
      num += 360;
    } else {
      num -= 360;
    }
  }
  return num;
}

double keepInNeg180to180(double num) {
  while (num >= 180 || num < -180) {
    if (num >= 180) {
      num -= 360;
    } else {
      num += 360;
    }
  }
  return num;
}
double PYTHAG_THEOREM(double num1, double num2) {
  return sqrt(pow(num1, 2) + pow(num2, 2));
}

void statePositionOdom();

int DTtemp() {
  Brain.Screen.clearScreen();
  while (1) {
    Brain.Screen.printAt(20, 150, "Left front %f ",
                         left_front.temperature(percentUnits::pct));
    Brain.Screen.printAt(20, 170, "Left back %f ",
                         left_back_one.temperature(percentUnits::pct));
    Brain.Screen.printAt(20, 190, "Left back %f ",
                         left_back_two.temperature(percentUnits::pct));
    Brain.Screen.printAt(40, 150, "Right front %f ",
                         right_front.temperature(percentUnits::pct));
    Brain.Screen.printAt(40, 170, "Right back %f ",
                         right_back_one.temperature(percentUnits::pct));
    Brain.Screen.printAt(40, 190, "Right back %f ",
                         right_back_two.temperature(percentUnits::pct));
    wait(10);
  }
  return 0;
}

void clawCheck(){
  Controller.Screen.setCursor(3, 1);
  if (front_claw.value() == 1){
    Controller.Screen.print("Claw Closed");
  }
  else if (front_claw.value() == 0){
    Controller.Screen.print("Claw Open");
  }
}

int controllerPrint(){
  Controller.Screen.clearScreen();
  while(true){
    // Controller.Screen.setCursor(1, 1);
    // Controller.Screen.print("X Coor: %f", finalGlobalX);
    Controller.Screen.setCursor(2, 1);
    Controller.Screen.print("Y Coor %f", finalGlobalY);
    Controller.Screen.setCursor(1, 1);
    Controller.Screen.print("Heading: %f", Inertial.heading());
    clawCheck();


  }
}

int DTVelocity(){
  Brain.Screen.clearScreen();
  while (1) {
    Brain.Screen.printAt(20, 150, "Left front %f ",
                         left_front.velocity(percentUnits::pct));
    Brain.Screen.printAt(20, 170, "Left back %f ",
                         left_back_one.velocity(percentUnits::pct));
    Brain.Screen.printAt(20, 190, "Left back %f ",
                         left_back_two.velocity(percentUnits::pct));
    Brain.Screen.printAt(250, 150, "Right front %f ",
                         right_front.velocity(percentUnits::pct));
    Brain.Screen.printAt(250, 170, "Right back %f ",
                         right_back_one.velocity(percentUnits::pct));
    Brain.Screen.printAt(250, 190, "Right back %f ",
                         right_back_two.velocity(percentUnits::pct));
    wait(10);
  }
  return 0;
}

void preauton(){
  vexcodeInit();//Inertial calibration

  //task BrainUI(showSortColor);
  task ConGUI(controllerPrint);
  task timer1(Timer1);//Timer
  task timer2(Timer2);
  task absoluteTimer(absTimer1);
  task speedTest(DTtemp);
  //task tempDisplay(DTtemp);
  task odoData(statePosition);//Odometry Data
}



void trackingWheelReset(){
  encB.resetRotation();
  encL.resetRotation();
  encR.resetRotation();
}