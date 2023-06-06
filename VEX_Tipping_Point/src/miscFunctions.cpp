#include "vex.h"

void BackClawAutoUp(){
  back_claw.set(true);
  wait(100);
  back_tilter.set(true);
}

void BackClawAutoDown(){
  back_tilter.set(false);
  wait(100);
  back_claw.set(false);
}

void fourBarFunction(double dist, double speed, bool waitComplete){
  if(dist < 0){
    fourBarAid.set(false);
  }
  fourbar.rotateFor(dist, rotationUnits::deg, speed, velocityUnits::pct, waitComplete);
  if (dist > 400){
    fourBarAid.set(true);
  }
}

void conveyorRotate(double speed){
  conv.spin(fwd, speed, velocityUnits::pct);
}

void goalDistanceCheck(){
  double leftDistance = distSensorL.objectDistance(mm);
  double rightDistance = distSensorR.objectDistance(mm);
  while (leftDistance > 30 && rightDistance > 30)
  {
    leftDistance = distSensorL.objectDistance(mm);
    rightDistance = distSensorR.objectDistance(mm);
    PIDMove2(-1, 75, 1000, 0.2, 1, 0, 1);
  }
  if (leftDistance < 30 && rightDistance < 30){
    BackClawAutoUp();
  }
}

void backGoalCheck(){
  if (distSensorL.objectDistance(mm) < 27 && distSensorR.objectDistance(mm) < 27 && back_tilter.value() == true && back_claw.value() == true)
  {
  BackClawAutoUp();
  }
}

void frontClawClose(){
  front_claw.set(true);
}

void auto_claw(){
  double startTime = Brain.timer(msec);
  while (Brain.timer(msec) - startTime < 10000){
   if(frontLimit.pressing() == true) {
     front_claw.set(true);
     break;
   }
  }
}


double current_conveyor_count;
int check_conv(){
  while(true){
    current_conveyor_count = conv.rotation(deg);
    wait(100);
    if(conv.rotation(deg) - current_conveyor_count < 10){
      conveyorRotate(-100);
      wait(300);
    }
    wait(25);
    conveyorRotate();
  }
  return 0;
}

void autoClimbCheck(){

  while(true){
    if(Inertial.pitch() > 1 && Inertial.pitch() ){
      PIDMove2(1.2, 90, 1000, 1, 6, 0, 2);
    }
    else if(Inertial.pitch() < -1){
      PIDMove2(-1.6, 90, 1000, 1, 6, 0, 1);
    }
    else if(Inertial.pitch() > -.5 && Inertial.pitch() < .5){
      Drivetrain.stop();
    }
  }
    
}

#define FREE 0
#define AUTO_CLAW 1


int sideTaskOneHolder = FREE;


int sideTaskSlotOne(){
  while(true){
    if(sideTaskOneHolder == AUTO_CLAW){
      auto_claw();
      sideTaskOneHolder = FREE;
    }
    wait(25);
  }
  return 0;
}

void sideTask(int Task){
  if (sideTaskOneHolder == FREE){sideTaskOneHolder = Task;}
}