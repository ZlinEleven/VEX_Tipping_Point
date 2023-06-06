#include "vex.h"

double TURN_MULTI=0.60;
double MOVE_MULTI=1.0;
void Drive(){
	if(abs(ch3)>5 || abs(ch1)>10){
	  left_drive.spin(fwd, (ch3)*MOVE_MULTI + (ch1)*TURN_MULTI, velocityUnits::pct);
	  right_drive.spin(fwd, (ch3)*MOVE_MULTI - (ch1)*TURN_MULTI, velocityUnits::pct);
  }
  else if(bUp){
    Drivetrain.spin(forward, 5, percentUnits::pct);
  }
  else if(bDown){
    Drivetrain.spin(reverse, 5, percentUnits::pct);
  }
  else{
    Drivetrain.stop();
  }
}

void Lift(){
  if(bR1){
    fourbar.spin(fwd, 100, velocityUnits::pct);
    fourbar.setStopping(hold);
    if(bR2){
      fourBarAid.set(true);
    }
  }
  else if(bR2){
    fourbar.spin(reverse, 100, velocityUnits::pct);
    fourbar.setStopping(hold);
    fourBarAid.set(false);
  }
  else{
    fourbar.stop();
  }
}

int conveyorCount = 0;
void conveyorAdd(){
  conveyorCount += 1;
  waitUntil(!Controller.ButtonY.pressing());
}
  
void conveyorReverse(){
  if(conveyorCount >= 9999){
    conveyorCount = 0;
  }
  else if(conveyorCount != 10000){
    conveyorCount = 10000;
  }
}

double prev_rotation;
void Conveyor(){
  // double error_speed = 0;
  // double desired_speed = 550;
  if(conveyorCount %2 == 1){
    // error_speed = desired_speed - conv.velocity(rpm);
    // conv.spin(fwd, desired_speed + error_speed, velocityUnits::rpm);
    conv.spin(fwd, 100, pct);
    
  }
  else if(conveyorCount == 10000){
    conv.spin(reverse, 100, velocityUnits::pct);
  }
  else if(conveyorCount%2 == 0){
    conv.stop(coast);
  }
}

void Front_Claw(){
  if (front_claw.value() == 1){
    front_claw.set(false);
  }
  else{
    front_claw.set(true);
  }
}

void claw_close(){
  front_claw.set(true);
}

void Back_Claw_Up(){
  back_claw.set(true);
  wait(200);
  back_tilter.set(true);
}

void Back_Claw_Down(){
  back_tilter.set(false);
  wait(300);
  back_claw.set(false);
}

void tilter_move(){
  if(back_tilter.value() == 1){
    back_tilter.set(false);
  }
  else{
    back_tilter.set(true);
  }
}

void Goal_Cover(){
  if (goal_cover.value() == 1){
    goal_cover.set(false);
  }
  else{
    goal_cover.set(true);
  }
}

int brakeCount = 0;
void Drivetrain_brake_type(){
  if(brakeCount % 2 == 0){
    Drivetrain.setStopping(hold);
    Controller.rumble("-");
    brakeCount += 1;
  } else{
    Drivetrain.setStopping(brake);
    Controller.rumble("- - -");
    brakeCount += 1;
  }
}

void opControl(){
  // front_claw.set(false);
  // back_tilter.set(false);
  // back_claw.set(false);
  Drivetrain.setStopping(brake);

  while(1){
    // frontLimit.pressed(claw_close);
    Controller.ButtonRight.pressed(Front_Claw);
    // Controller.ButtonLef0t.pressed(tilter_move);
    Drive();
    Lift();
    Conveyor();

    Controller.ButtonL1.pressed(Back_Claw_Up);
    Controller.ButtonL2.pressed(Back_Claw_Down);
    Controller.ButtonLeft.pressed(Drivetrain_brake_type);
    Controller.ButtonX.pressed(conveyorReverse);
    Controller.ButtonY.pressed(conveyorAdd);
    Controller.ButtonA.pressed(Goal_Cover);

    if (bUp){
      // oldProgSkills();
    //   // noShowAuto();
      rightAuto();
      //leftAuto();
      // skill310();
      //SimplyBetter();
    }

    if(bB){
      vexcodeInit();
    }
  }   
}