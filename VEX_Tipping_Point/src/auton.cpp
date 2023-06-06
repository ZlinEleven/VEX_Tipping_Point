#include "vex.h"

void SimplyBetter(){
  // setPositionOdom(27, 12, -90);
  // front_claw.set(false);
  // back_tilter.set(false);
  // back_claw.set(false);

  // PIDMove2(-13, 90, 1500, 1, 6, 0, 0);
  // goalDistanceCheck(); 
  // BackClawAutoUp();
  
  // // Acquire alliance mobile goal

  // fourBarFunction(-100);
  // sideTask(AUTO_CLAW);
  // moveToDrive(24, 36, 100, 10, 0, 4000, 15);
  // conveyorRotate();
  // moveToDrive_limit(37.5, 75, 90, 7, 0, 4000, 10);
  // front_claw.set(true); 

  // // Left neutral goal acquired

  // fourBarFunction(800, 100, false);
  // wait(100);
  // moveToDrive(69, 93, 100, 5, 0, 4000, 5);
  // moveToDrive(68, 115, 100, 7, 0, 2500, 8);
  // // PIDTurn(350, 100, 11600, 1, 1, 0, 1);
  // //PIDTurn(0, 30, 1000, 0.3, 0.75, 0, 1);

  // PIDTurn(-2, 40, 2200, 1, 1, 0, 1);
  // fourBarFunction(-300, 100, false);
  // wait(250);
  // front_claw.set(false);

  // // Left neutral goal scored
  setPositionOdom(27, 12, -90);
  front_claw.set(false);
  back_tilter.set(false);
  back_claw.set(false);
  goal_cover.set(false);

  fourBarFunction(-150);

  PIDMove2(-11, 90, 1500, 1, 6, 0, 0);
  goalDistanceCheck(); 
  BackClawAutoUp();
  
  // Acquire alliance mobile goal

  moveToDriveMax(30, 36, 100, 10, 0, 5000, 15);
  conveyorRotate(60);
  sideTask(AUTO_CLAW);
  moveToDriveMax(40, 69, 100, 7, 0, 5000, 15);
  moveToDrive_limit(40, 73, 40, 7, 0, 5000, 15);
  front_claw.set(true); 
  wait(100);

  // Left neutral goal acquired

  fourBarFunction(800, 100, false);
  wait(100);
  moveToDriveMax(71, 96, 60, 5, 0, 5260, 9);
  // conveyorRotate(-100);
  moveToDrive(68, 113, 70, 7, 0, 3500, 10);
  if(IMUAngle > 0 && IMUAngle < 45){
    PIDTurn(-16, 100, 1000, 1, 1, 0, 1); // 118
  }

  fourBarFunction(-350, 100, false);
  wait(400);
  fourBarFunction(100);
  wait(200);
  front_claw.set(false);
  wait(400);

  // Left neutral goal scored
  wait(350);

  fourBarFunction(200, 100);
  // PIDTurn(0, 100, 1500, 1, 1, 0, 1);

  PIDMove2(-10, 100, 1900, 1, 6, 0, 0);
  PIDTurn(180, 90, 2000, 1, 1, 0, 1);
  fourBarFunction(-750);
  wait(400);
  moveToDrive(72, 78, 70, 7, 2, 3000, 7);
  moveToDrive_limit(71, 68.5, 35, 8, 0, 3200, 8);
  wait(200);
  // PIDTurn(0, 100, 1000, 1, 1, 0, 1);
  
  front_claw.set(true);
  fourBarFunction(800);
  //Middle goal aquired
  PIDTurn(35, 100, 2000, 1, 1, 0, 1);
  wait(200);
  
  moveToDrive(76, 93, 70, 6, 0, 3000, 7);
  moveToDrive(79, 113, 60, 5, 0, 3000, 5);
  // PIDTurn(0, 40, 2200, 1, 1, 0, 1);
  fourBarFunction(-500, 100, false);
  wait(550);
  front_claw.set(false);
  PIDMove2(-2, 40, 1000, 1, 4, 0, 1);
  // PIDTurn(2, 100, 1500, 1, 1, 0, 1);
  wait(400);

  //Middle goal scored

  // fourBarFunction(150);
  // PIDMove2(-2, 90, 1200, 1, 4, 0, 0);
  // // PIDTurn(0, 100, 2300, 1, 1, 0, 1);
  
  // wait(300);
  // PIDMove2(-10, 50, 1000, 1, 4, 0, 0);
  // sideTask(AUTO_CLAW);
  // PIDTurn(90, 40, 3000, 0.5, 0.75, 0, 1);
  // back_tilter.set(false);
  // wait(300);
  // back_claw.set(false);
  
  // //Alliance mogo dropped

  // fourBarFunction(-750);
  // PIDMove2(7, 100, 1500, 1, 6, 0, 0);
  // PIDTurn(keepInRange360(IMUAngle + 180), 272, 1500, 0.2, 1, 0, 1);
  // PIDMove2(16, 100, 1500, 2, 3, 0, 1);
  // wait(100);
  // front_claw.set(true);
  // wait(200);

  // // Picks up Alliance Mobile Goal
  // fourBarFunction(600);
  // PIDMove2(-16, 50, 1500, 5, 6, 0, 0);

  // if(keepInRange360(IMUAngle) > 45 && keepInRange360(IMUAngle) < 315){
  //   PIDTurn(0, 40, 2000, 0.5, 1, 0, 1);
  // }
  // PIDMove2(28, 100, 3000, 2, 4, 0, 0);
  // // moveToDrive(72, 114, 100, 8, 0, 3200, 8);
  
  // front_claw.set(false);
  // fourBarFunction(-100);
  // wait(300);
  
  fourBarFunction(150);
  PIDMove2(-22, 50, 1000, 1, 4, 0, 0);
  //PIDTurn(-10, 40, 3000, 0.5, 0.75, 0, 1);
  //PIDMove2(-5, 100, 1000, 1, 6, 0, 0);
  back_tilter.set(false);
  wait(300);
  back_claw.set(false);
  
  //Alliance mogo dropped

  fourBarFunction(-750);
  PIDMove2(5, 100, 1250, 1, 6, 0, 0);
  wait(200);
  PIDTurn(keepInRange360(IMUAngle + 179), 40, 1000, 0.2, 0.75, 0, 1.5);
  sideTask(AUTO_CLAW);
  PIDMove_limit(18, 60, 1500, 2, 3, 0, 1);
  wait(100);
  front_claw.set(true);

  // Picks up Alliance Mobile Goal
  fourBarFunction(650);
  moveToDriveBackMax(73, 96, 100, 10, 0, 3250, 6);
  PIDTurn(-20, 40, 1000, 1, 1, 0, 1);
  moveToDrive(71, 113, 50, 10, 0, 3000, 12);
  //PIDMove2(20, 100, 2000, 3, 3, 0, 0);

  if(keepInRange360(IMUAngle) > 45 && keepInRange360(IMUAngle) < 315){
    PIDTurn(0, 40, 1750, 0.5, 1, 0, 1);
  }

  front_claw.set(false);
  wait(300);

  // Alliance Goal Score

  moveToDriveBack(96, 31, 100, 5, 0, 3800, 6);
  PIDTurn(270, 100, 2200, 1, 1, 0, 1);
  wait(100);
  // moveToDriveBack(127, 34, 80, 6, 0, 2250, 6);
  PIDMove2(-50, 100, 2200, 1, 4, 0, 1);
  BackClawAutoUp();
  //Second Alliance Picked up

  sideTask(AUTO_CLAW);  

  fourBarFunction(-750);
  moveToDrive(105, 36, 100, 8, 0, 2200, 8);
  PIDTurn(0, 40, 2200, 0.5, 1, 0, 1);
  wait(200);
  moveToDrive_limit(105, 74, 100, 8, 0, 3000, 8);
  // moveToDrive(108, 74, 100, 5, 0, 3000, 5);
  front_claw.set(true);
  wait(200);

  //Right Picked up
  fourBarFunction(750);
  moveToDrive(67, 98, 100, 8, 0, 3000, 8);
  moveToDrive(70, 114, 100, 8, 0, 3000, 8);
  // PIDTurn(0, 100, 1500, 1, 1, 0, 1);
  // PIDMove2(5, 100, 1500, 1, 4, 0, 0);
  fourBarFunction(-350);
  wait(200);
  front_claw.set(false);

  //Right scored
  wait(300);
  fourBarFunction(100);
  PIDMove2(-2, 90, 1200, 1, 4, 0, 0);
  
  wait(300);
  PIDMove2(-12, 50, 1000, 1, 4, 0, 0);
  sideTask(AUTO_CLAW);
  PIDTurn(90, 40, 3000, 0.5, 0.75, 0, 1);
  back_tilter.set(false);
  wait(300);
  back_claw.set(false);
  
  //Alliance mogo dropped

  fourBarFunction(-750);
  PIDMove2(9, 100, 1500, 1, 6, 0, 0);
  PIDTurn(keepInRange360(IMUAngle + 180), 272, 1500, 0.2, 1, 0, 1);
  PIDMove2(16, 100, 1500, 2, 3, 0, 1);
  wait(100);
  front_claw.set(true);
  wait(200);

  // Picks up Alliance Mobile Goal
  fourBarFunction(600);
  PIDMove2(-18, 50, 1500, 5, 6, 0, 0);
  moveToDrive(73, 117, 100, 5, 1, 2200, 8);

  if(keepInRange360(IMUAngle) > 45 && keepInRange360(IMUAngle) < 315){
    PIDTurn(0, 40, 2000, 0.5, 1, 0, 1);
  }

  PIDTurn(0, 100, 1800, 1, 1, 0, 1);
  front_claw.set(false);

  //Alliance scored

  fourBarFunction(100);
  wait(300);

  
  PIDTurn(90, 100, 1800, 1, 1, 0, 1);
  fourBarFunction(-750);
  moveToDrive(124, 108, 100, 8, 0, 3000, 8);
  sideTask(AUTO_CLAW);
  moveToDriveBackMax(130, 126, 100, 10, 0, 2000, 9);
  PIDTurn(-90, 100, 2000, 1, 1, 0, 1);
  sideTask(AUTO_CLAW);
  moveToDriveMax(111, finalGlobalY, 40, 4, 0, 4000, 10);
  front_claw.set(true);
  wait(250);
  // PIDTurn(326, 100, 1800, 1, 1, 0, 1);
  // wait(200);
  // moveToDrive_limit(103, 133, 50, 3, 0, 4000, 3);
  // front_claw.set(true);

  //1/2 aquired

  fourBarFunction(130);
  moveToDriveBack(124, 96, 100, 4, 0, 3500, 3);
  PIDTurn(90, 100, 1700, 1, 1, 0, 1);
  wait(200);
  moveToDriveBack(12, 108, 100, 7, 0, 3600, 7);
  BackClawAutoUp();
  //2/2 aquired

  PIDTurn(180, 100, 2000, 1, 1, 0, 1);
  fourBarFunction(550);
  moveToDrive(18, 2, 100, 8, 0, 4000, 8);
  wait(200);
  PIDMove2(-3, 100, 2000, 1, 4, 0, 0);
  PIDTurn(90, 60, 3500, 1, 1, 0, 1);
  PIDMove2(30, 80, 2000, 1, 4, 0, 0);
  wait(200);
  fourBarFunction(-600, 100, true);
  moveToDrive(72, 4, 100, 9, 0, 3500, 9);
  // PIDMove2(26, 80, 3000, 1, 4, 0, 0);
  //Robot Finishes Climbing

}
  



void oldProgSkills(){
  task sideTaskOne = task(sideTaskSlotOne);

  setPositionOdom(26, 12, -90);
  front_claw.set(false);
  back_tilter.set(false);
  back_claw.set(false);
  goal_cover.set(false);

  fourBarFunction(-150);

  PIDMove2(-11, 90, 1500, 1, 6, 0, 0);
  goalDistanceCheck(); 
  BackClawAutoUp();
  
  // Acquire alliance mobile goal

  moveToDriveMax(30, 36, 100, 10, 0, 5000, 15);
  conveyorRotate(60);
  sideTask(AUTO_CLAW);
  moveToDriveMax(40, 81, 100, 7, 0, 5000, 15);
  front_claw.set(true); 
  wait(100);

  // Left neutral goal acquired

  fourBarFunction(800, 100, false);
  wait(100);
  moveToDriveMax(71, 96, 40, 5, 0, 5260, 9);
  // conveyorRotate(-100);
  moveToDrive(68, 118, 40, 7, 0, 5000, 10);
  if(IMUAngle > 0 && IMUAngle < 45){
    PIDTurn(-16, 100, 1000, 1, 1, 0, 1); // 118
  }

  fourBarFunction(-350, 100, false);
  wait(400);
  fourBarFunction(100);
  wait(200);
  front_claw.set(false);
  wait(400);

  // Left neutral goal scored
  conveyorRotate(-100);
  fourBarFunction(100);
  PIDMove2(-22, 50, 1000, 1, 4, 0, 0);
  //PIDTurn(-10, 40, 3000, 0.5, 0.75, 0, 1);
  //PIDMove2(-5, 100, 1000, 1, 6, 0, 0);
  back_tilter.set(false);
  wait(300);
  back_claw.set(false);
  
  //Alliance mogo dropped

  fourBarFunction(-750);
  PIDMove2(5, 100, 1250, 1, 6, 0, 0);
  wait(200);
  PIDTurn(keepInRange360(IMUAngle + 179), 40, 1000, 0.2, 0.75, 0, 1.5);
  sideTask(AUTO_CLAW);
  PIDMove_limit(18, 60, 1500, 2, 3, 0, 1);
  wait(100);
  front_claw.set(true);

  // Picks up Alliance Mobile Goal
  fourBarFunction(650);
  moveToDriveBackMax(78, 96, 100, 10, 0, 3250, 6);
  PIDTurn(-20, 40, 1000, 1, 1, 0, 1);
  moveToDrive(74, 120, 50, 10, 0, 3000, 12);
  //PIDMove2(20, 100, 2000, 3, 3, 0, 0);

  if(keepInRange360(IMUAngle) > 45 && keepInRange360(IMUAngle) < 315){
    PIDTurn(0, 40, 1750, 0.5, 1, 0, 1);
  }

  front_claw.set(false);
  wait(300);

  // Alliance Goal Scored

  conveyorRotate(100);
  PIDMove2(-8, 50, 2000, 1, 10, 0, 0);
  PIDTurn(90, 50, 750, 2, 1, 0, 1);
  moveToDriveBackMax(10, 106, 100, 10, 0, 1750, 8);
  goalDistanceCheck();

  // Second alliance goal acquired

  fourBarFunction(-750);
  PIDMove2(10, 100, 1000, 1, 5, 0, 0);
  //sideTask(AUTO_CLAW);
  moveToDrive_limit(70, 70, 75, 8, 1, 3000, 9);
  front_claw.set(true);

  // Tall neutral goal acquired

  fourBarFunction(300);
  PIDTurn(181, 40, 1000, 2, 0.75, 0, 1);
  fourBarFunction(800, 127, false);
  moveToDriveMax(72, 53, 100, 5, 0, 5000, 10);
  conveyorRotate(-100);
  moveToDrive(72, 20, 40, 2, 2, 3250, 9);
  fourBarFunction(-250);
  PIDTurn(192, 100, 1000, 3, 3, 0, 0);
  wait(300);
  front_claw.set(false);

  // Tall neutral goal scored

  wait(350);
  PIDMove2(-3, 100, 750, 1, 2, 0, 0);
  fourBarFunction(100, 50, false);
  // conveyorRotate(-100);
  PIDMove2(-17, 50, 4000, 1, 6, 0, 0);
  conveyorRotate();
  fourBarFunction(-750);
  back_tilter.set(false);
  wait(300);
  back_claw.set(false);

  // Second alliance mogo dropped

  PIDMove2(8, 100, 1500, 1, 3, 0, 0);
  PIDTurn(keepInRange360(IMUAngle + 177), 40, 1500, 0.2, 0.75, 0, 1.5);
  // sideTask(AUTO_CLAW);
  PIDMove_limit(16, 100, 2000, 2, 3, 0, 1);
  wait(100);
  front_claw.set(true);

  // Second alliance mogo attained again

  fourBarFunction(650);
  PIDTurn(170, 40, 2000, 2, 1, 0, 1);
  moveToDrive(77, 22, 70, 10, 0, 3000, 10);
  fourBarFunction(-75);
  PIDTurn(180, 50, 1000, 1, 1, 0, 1); // 118
  wait(200);
  front_claw.set(false);
  wait(200);

  // Second alliance mogo scored

  fourBarFunction(25);
  PIDMove(-11, 60, 1000, 1, 5, 0, 0);
  PIDTurn(-90, 50, 750, 1, 1, 0, 1);
  conveyorRotate(-100);
  moveToDriveBackMax(130, 44, 80, 9, 0, 2000, 11);
  back_claw.set(true);
  wait(300);
  back_tilter.set(true);

  setPositionOdom(128, 32, IMUAngle);

  // Third alliance mogo acquired
  conveyorRotate();
  moveToDrive(123, 48, 60, 5, 2, 2000, 5);
  moveToDrive(124, 83, 35, 4, 0, 4000, 5);
  fourBarFunction(-850);
  PIDMove2(-28, 70, 2000, 1, 5, 0, 0);
  PIDTurn(-25, 100, 2000, 1, 1, 0, 1);
  sideTask(AUTO_CLAW);
  moveToDrive_limit(106, 80, 100, 3, 0, 3000, 8);
  front_claw.set(true);

  // Right neutral goal acquired
  // conveyorRotate(-100);
  fourBarFunction(700);
  moveToDriveMax(75, 110, 40, 8, 0, 6000, 12);
  //conveyorRotate();
  PIDTurn(0, 15, 1000, 0.3, 0.75, 0, 1);
  PIDMove2(12, 40, 1000, 2, 5, 0, 0);
  front_claw.set(false);


  // Right neutral goal scored

  wait(350);
  fourBarFunction(50);
  PIDMove2(-5, 50, 3000, 1, 5, 0, 0);
  PIDTurn(90, 40, 2000, 1, 1, 0, 1);
  back_tilter.set(false);
  wait(300);
  back_claw.set(false);

  // third alliance mogo dropped
  

  moveToDriveMax(120, finalGlobalY - 3, 100, 10, 0, 5000, 10);
  PIDTurn(225, 40, 3000, 2, 1, 0, 1);
  moveToDriveBack(144, 144, 100, 10, 0, 1500, 9); // 126
  PIDTurn(-90, 100, 2000, 1, 1, 0, 1);
  fourBarFunction(-850);
  //sideTask(AUTO_CLAW);
  //PIDMove_limit(26, 18, 5500, 2, 3, 0, 1);
  setPositionOdom(137, 132, IMUAngle);
  PIDTurn(-90, 49, 1000, 1.5, 1, 0, 1);
  moveToDrive_limit(108, 135, 30, 3, 0, 2500, 10);
  front_claw.set(true);
  wait(250);

  // Right Opposing alliance Goal Acquired

  conveyorRotate(-100);
  fourBarFunction(150);
  PIDMove2(-15, 100, 1500, 3, 3, 0, 0);
  moveToDriveMax(75, 51, 80, 4, 0, 5000, 8);
  fourBarFunction(500, 100, true);
  moveToDrive(73, 27, 40, 8, 0, 2000, 13);
  fourBarFunction(-50);
  //wait(250);
  front_claw.set(false);
  fourBarFunction(50);
  wait(150);
  PIDMove2(-15, 40, 1000, 1, 5, 0, 0);
}

void progSkills(){
  task sideTaskOne = task(sideTaskSlotOne);

  setPositionOdom(28, 12, -90);
  front_claw.set(false);
  back_tilter.set(false);
  back_claw.set(false);

  PIDMove2(-7, 90, 1500, 1, 6, 0, 0);
  goalDistanceCheck(); 
  BackClawAutoUp();
  
  // Acquire alliance mobile goal

  moveToDriveMax(30, 36, 100, 10, 0, 5000, 15);
  conveyorRotate();
  sideTask(AUTO_CLAW);
  moveToDriveMax(38, 80, 100, 7, 0, 5000, 15);
  front_claw.set(true); 
  wait(100);

  // Left neutral goal acquired

  fourBarFunction(800, 100, false);
  wait(100);
  moveToDriveMax(72, 96, 100, 5, 0, 4000, 9);
  // conveyorRotate(-100);
  moveToDrive(69, 115, 100, 7, 0, 2500, 8); // 118

  fourBarFunction(-350, 100, false);
  wait(800);
  front_claw.set(false);
  wait(300);

  // Left neutral goal scored

  fourBarFunction(200);
  PIDMove2(-12, 60, 1000, 1, 4, 0, 0);
  sideTask(AUTO_CLAW);
  PIDTurn(70, 40, 3000, 0.5, 0.75, 0, 1);
  PIDMove2(-5, 100, 1000, 1, 6, 0, 0);
  back_tilter.set(false);
  wait(300);
  back_claw.set(false);
  
  //Alliance mogo dropped

  fourBarFunction(-750);
  PIDMove2(7, 100, 1500, 1, 6, 0, 0);
  //PIDTurn(keepInRange360(IMUAngle + 180), 40, 1800, 0.3, 0.75, 0, 1);
  PIDTurn(keepInRange360(IMUAngle + 180), 40, 1750, 0.2, 0.75, 0, 1.5);
  sideTask(AUTO_CLAW);
  PIDMove2(21, 100, 1750, 2, 3, 0, 3);
  // limit_move(3, 40, 4, 0);
  wait(100);
  front_claw.set(true);

  // Picks up Alliance Mobile Goal
  fourBarFunction(600);
  moveToDriveBackMax(78, 96, 100, 10, 0, 3000, 6);
  PIDTurn(-20, 40, 1000, 1, 1, 0, 1);
  // moveToDrive(76, 114, 50, 5, 1, 2000, 8);
  PIDMove2(17, 100, 2000, 3, 3, 0, 0);

  if(keepInRange360(IMUAngle) > 45 && keepInRange360(IMUAngle) < 315){
    PIDTurn(0, 40, 2000, 0.5, 1, 0, 1);
  }

  front_claw.set(false);
  //fourBarFunction(-100);
  wait(300);


  // Alliance Goal Scored
  conveyorRotate(100);
  PIDMove2(-8, 50, 2000, 1, 10, 0, 0);
  PIDTurn(90, 100, 750, 2, 1, 0, 1);
  moveToDriveBackMax(12, 106, 100, 10, 0, 1750, 8);
  BackClawAutoUp();

  // Second alliance goal acquired

  fourBarFunction(-750);
  PIDMove2(10, 100, 1000, 1, 5, 0, 0);
  sideTask(AUTO_CLAW);
  moveToDriveMax(72, 70, 90, 8, 1, 3000, 9);
  front_claw.set(true);

  // Tall neutral goal acquired

  //PIDMove2(-9, 70, 1000, 2, 5, 0, 0);
  fourBarFunction(100);
  PIDTurn(180, 40, 1000, 2, 0.5, 0, 1);
  fourBarFunction(650);
  moveToDriveMax(72, 53, 100, 5, 0, 5000, 10);
  moveToDrive(71, 21, 30, 2, 2, 3000, 10);
  fourBarFunction(-250);
  wait(300);
  front_claw.set(false);

  // Tall neutral goal scored 

  wait(350);
  fourBarFunction(50);
  conveyorRotate(-100);
  PIDMove2(-27, 50, 4000, 1, 6, 0, 0);
  conveyorRotate();
  //PIDTurn(-90, 40, 3000, 0.5, 0.75, 0, 1);
  fourBarFunction(-750);
  //PIDMove2(-7, 50, 1000, 1, 6, 0, 0);
  //PIDMove2(7, 50, 1000, 1, 6, 0, 0);
  back_tilter.set(false);
  wait(300);
  back_claw.set(false);

  // Second alliance mogo dropped

  sideTask(AUTO_CLAW);
  PIDMove2(8, 100, 1500, 1, 3, 0, 0);
  PIDTurn(keepInRange360(IMUAngle + 177), 40, 2500, 0.2, 0.75, 0, 1.5);
  PIDMove2(16, 100, 2000, 2, 3, 0, 1);
  wait(100);
  front_claw.set(true);

  // Second alliance mogo attained again

  fourBarFunction(700);
  PIDTurn(170, 40, 2000, 2, 1, 0, 1);
  moveToDrive(78, 22, 100, 5, 0, 1800, 10);
  if(keepInRange360(IMUAngle) > 215 && keepInRange360(IMUAngle) < 135){
    PIDTurn(180, 40, 2000, 0.5, 1, 0, 1);
  }
  wait(200);
  front_claw.set(false);
  //fourBarFunction(-100);
  wait(300);

  // Second alliance mogo scored


  PIDMove(-10, 60, 1000, 1, 5, 0, 0);
  PIDTurn(-95, 100, 3000, 2, 1, 0, 1);
  moveToDriveBackMax(123, 36, 100, 8, 1, 1800, 11);
  BackClawAutoUp();

  setPositionOdom(129, 34, IMUAngle);

  // Third alliance mogo acquired

  moveToDrive(121, 48, 60, 5, 2, 2000, 5);
  moveToDrive(123, 75, 60, 4, 0, 4000, 5);
  fourBarFunction(-850);
  PIDMove2(-17, 70, 2000, 1, 5, 0, 0);
  PIDTurn(-30, 100, 2000, 1, 1, 0, 1);
  sideTask(AUTO_CLAW);
  moveToDriveMax(104, 74, 100, 3, 0, 3000, 8);
  front_claw.set(true);

  // Right neutral goal acquired

  fourBarFunction(650);
  moveToDrive(94, 98, 100, 5, 0, 3000, 9);
  wait(200);
  moveToDriveBackMax(74, 84, 100, 8, 0, 3000, 10);
  conveyorRotate(-100);
  moveToDrive(72, 108, 100, 5, 0, 2000, 12);
  conveyorRotate();
  PIDTurn(0, 30, 1000, 0.3, 0.75, 0, 1);
  PIDMove2(10, 69, 1500, 2, 5, 0, 0);
  front_claw.set(false);

  // Right neutral goal scored

  wait(350);

  fourBarFunction(50);
  PIDMove2(-40, 50, 4000, 1, 6, 0, 0);
  PIDMove2(9, 50, 1000, 1, 6, 0, 0);
  //PIDTurn(90, 40, 3000, 0.5, 0.75, 0, 1);
  back_tilter.set(false);
  wait(300);
  back_claw.set(false);
  
  // Third alliance mogo dropped

  wait(100);
  fourBarFunction(-750);
  PIDMove2(7, 100, 1500, 1, 6, 0, 0);
  PIDTurn(keepInRange360(IMUAngle + 177), 40, 2500, 0.2, 0.75, 0, 1.5);
  sideTask(AUTO_CLAW);
  PIDMove2(18, 90, 2200, 2, 3, 0, 1);
  //limit_move(3, 40, 4, 0);
  wait(100);
  front_claw.set(true);

  // Picks up Alliance Mobile Goal
  fourBarFunction(700);
  //PIDMove2(-5, 60, 1500, 2, 6, 0, 0);
  PIDTurn(0, 40, 2000, 2, 1, 0, 1);
  moveToDrive(75, 108, 75, 5, 0, 1800, 9);
  PIDMove2(10, 50, 1500, 2, 3, 0, 0);

  if(keepInRange360(IMUAngle) > 45 && keepInRange360(IMUAngle) < 315){
    PIDTurn(0, 40, 2000, 0.5, 1, 0, 1);
  }

  front_claw.set(false);
  wait(100);
  fourBarFunction(50);
  wait(200);
  
  // Third Alliance Mogo Scored

  conveyorRotate(100);
  PIDMove2(-15, 50, 3000, 1, 5, 0, 0);
  PIDTurn(-80, 100, 3000, 1, 1, 0, 1);
  fourBarFunction(-750);
  moveToDriveBackMax(108, finalGlobalY, 100, 10, 0, 5000, 10);
  moveToDriveBackMax(130, 126, 100, 10, 0, 2000, 9);
  PIDTurn(-90, 100, 2000, 1, 1, 0, 1);
  sideTask(AUTO_CLAW);
  moveToDriveMax(111, finalGlobalY, 40, 4, 0, 4000, 10);
  front_claw.set(true);
  wait(250);

  // Right Opposing alliance Goal Acquired

  fourBarFunction(100);
  moveToDriveBackMax(120, 110, 100, 10, 0, 2000, 5);
  moveToDriveBackMax(74, 48, 100, 10, 0, 5000, 8);
  fourBarFunction(600);
  PIDTurn(-180, 100, 2000, 3, 0.75, 0, 2);
  moveToDrive(75, 16, 100, 8, 0, 1700, 10);
  //fourBarFunction(-50);
  wait(250);
  front_claw.set(false);
  fourBarFunction(50);
  wait(300);
  PIDMove2(-15, 40, 1000, 1, 5, 0, 0);
}

void noShowAuto(){
  setPositionOdom(28, 12, -90);
  front_claw.set(false);
  back_tilter.set(false);
  back_claw.set(false);
  goal_cover.set(false);

  PIDMove2(-9, 90, 1500, 1, 6, 0, 0);
  goalDistanceCheck(); 
  BackClawAutoUp();

  wait(250);
  conveyorRotate();
  wait(200);

  PIDMove2(10, 50, 500, 1, 6, 0, 0);
  wait(100);
  conveyorRotate(0);

  moveToDriveMax(15, 34, 60, 10, 0, 2500, 5);
  PIDTurn(83, 40, 2200, 1, 1, 0, 1);
  wait(100);
  conveyorRotate();
  moveToDriveMax(72, 36, 100, 15, 0, 3500, 20);
  moveToDriveMax(106, 30, 100, 15, 0, 3500, 10);

  PIDTurn(-90, 80, 2000, 1, 1, 0, 1);
  wait(100);
  moveToDriveBackMax(128, 32, 100, 20, 0, 1700, 8);
  BackClawAutoUp();

  PIDMove2(7, 100, 2000, 1, 6, 0, 0);
  conveyorRotate();
  PIDTurn(0, 100, 2000, 2, 1, 0, 1);
  fourBarFunction(100);
  conveyorRotate();
  setPositionOdom(119, finalGlobalY - 3, IMUAngle);
  moveToDrive(119, 75, 35, 5, 0, 5000, 7);

  moveToDriveBackMax(119, 32, 100, 10, 0, 3000, 10);
  BackClawAutoDown();
  wait(250);

  fourBarFunction(-850);
  // goal_cover.set(true);
  moveToDrive_limit(72, 71, 100, 100, 1, 3000, 8);
  front_claw.set(true);
  wait(200);
  fourBarFunction(200);
  moveToDriveBackMax(100, 30, 100, 10, 0, 5000, 5);
}

void noShowAutoButBetter(){
  setPositionOdom(108, 16, 0);
  front_claw.set(false);
  back_tilter.set(false);
  back_claw.set(false);
  goal_cover.set(false);
  fourBarFunction(-150);
  sideTask(AUTO_CLAW);

  fourBarFunction(-100);
  // goal_cover.set(true);
  moveToDriveMax(108, 49, 100, 100, 0, 4000, 10);
  // PIDMove2(33, 100, 5000, 10, 100, 0, 0);
  moveToDrive_limit(109, 70, 100, 100, 0, 3000, 10);
  // PIDMove_limit(28, 100, 5000, 2, 5, 0, 1);
  
  front_claw.set(true);

  moveToDriveBackMax(136, 36, 100, 6, 0, 1750, 5); 
  fourBarFunction(75);
  goalDistanceCheck();

  //Obtained AWP Mobile Goal

  conveyorRotate(100);
  fourBarFunction(200);
  PIDTurn(270, 100, 1300, 1, 1, 0, 1);
  moveToDrive(72, 48, 100, 10, 0, 3000, 8);
  fourBarFunction(400);
  moveToDrive(42, 48, 100, 7, 0, 3000, 10);
  moveToDriveMax(15, 33, 100, 7, 0, 3000, 10);
  PIDTurn(-180, 100, 1250, 1, 3, 0, 0);
  BackClawAutoDown();

  // First Alliance Dropped
  // fourBarFunction(-150);
  PIDTurn(-80, 50, 1000, 3, 1, 0, 1);
  conveyorRotate(-100);
  moveToDriveBack(43, 15, 70, 4, 0, 2000, 5);
  goalDistanceCheck();

  // Second alliance mogo acquired
  fourBarFunction(100);
  conveyorRotate();
  moveToDriveMax(4, 12, 60, 6, 0, 2500, 8);
  fourBarFunction(-700);
  PIDMove2(-8, 100, 2000, 2, 5, 0, 0);
  front_claw.set(false);

  // Neutral goal dropped
  // goal_cover.set(false);
  PIDMove2(-5, 100, 2000, 2, 5, 0, 0);
  PIDTurn(0, 100, 1000, 5, 6, 0, 0);
  BackClawAutoDown();
  fourBarFunction(-100);
  moveToDriveMax(60, 58, 100, 100, 0, 3000, 10);
  sideTask(AUTO_CLAW);
  // PIDTurn(5, 100, 1000, 3, 6, 0, 0);
  moveToDrive_limit(68, 75, 100, 5, 1, 3000, 10);
  front_claw.set(true);
  moveToDriveBackMax(72, 36, 100, 20, 0, 2000, 5);
}


void leftAuto() {
  conv.setStopping(coast);
  Drivetrain.setStopping(hold);
  setPositionOdom(26, 18, 9);
  front_claw.set(false);
  back_tilter.set(false);
  back_claw.set(false);
  goal_cover.set(true);
  fourBarFunction(-150);
  sideTask(AUTO_CLAW);
  // PIDMove_limit(64, 100, 5000, 3, 10, 0, 0);
  moveToDrive_limit(38, 72, 100, 20, 0, 3000, 10);
  // wait(250);
  front_claw.set(true);
  fourBarFunction(200);

  // left neutral acquired
  
  //PIDTurn(135, 100, 2000, 1, 1, 0, 1);
  moveToDriveBackMax(52, 57, 100, 4, 0, 2200, 8);
  moveToDriveBackMax(58, 57, 100, 4, 0, 2500, 8);
  PIDTurn(-113, 100, 2000, 1, .5, 0, 1);
  moveToDriveBack(75, 75, 50, 3, 1, 2500, 10);
  back_claw.set(true);
  
  PIDMove2(-5, 30, 1000, 1, 5, 0, 0);
  back_tilter.set(true);

  // middle neutral acquired
  //moveToDrive(24, 48, 100, 10, 0, 2500, 8);
  moveToDriveMax(26, 34, 100, 10, 0, 2500, 8);
  back_tilter.set(false);
  wait(500);
  back_claw.set(false);
  //moveToDrive(14, 12, 100, 10, 0, 2500, 8);
  PIDMove2(5, 60, 1000, 3, 6, 0, 0);
  //PIDMove2(-3, 60, 1000, 1, 6, 0, 0);
  PIDTurn(-72, 40, 1000, 1, 0.75, 0, 1);
  moveToDriveBack(42, 12, 50, 4, 0, 1500, 8);
  // goalDistanceCheck();

  BackClawAutoUp();

  // alliance acquired
  wait(200);
  conveyorRotate();
  fourBarFunction(750);
  // PIDTurn(-90, 100, 1000, 2, 1, 0, 1);

  // preloads rolled in
  wait(200);
  conveyorRotate();
  PIDTurn(-85, 100, 1500, 2, 1, 0, 1);
  // moveToDrive(7, finalGlobalY, 30, 6, 0, 2500, 5);
  PIDMove2(40, 30, 2500, 3, 5, 0, 0);

  // match loads rolled in

  // PIDMove(-5, 90, 1000, 1, 4, 0, 0);
  moveToDriveBack(24, 24, 50, 5, 0, 2000, 8);
  PIDTurn(0, 90, 3000, 1, 1, 0, 1);
  fourBarFunction(-750);  
  PIDMove2(5, 60, 1000, 1, 6, 0, 0);
  BackClawAutoDown();
  
}

void somethingFunny(){
  // setPositionOdom(24, 18, 0);
  // moveToDrive(38, 70, 100, 8, 0, 1000, 8);
  fourBarFunction(-100);
  PIDMove2(48, 100, 3000, 1, 8, 0, 0);
  // wait(250);
  // front_claw.set(true);
  PIDMove2(-10, 100, 2000, 5, 6, 0, 0);
}

void rightAuto(){
  setPositionOdom(108, 16, 0);
  front_claw.set(false);
  back_tilter.set(false);
  back_claw.set(false);
  goal_cover.set(false);
  fourBarFunction(-150);
  sideTask(AUTO_CLAW);

  fourBarFunction(-100);
  goal_cover.set(true);
  moveToDriveMax(108, 49, 100, 100, 0, 5000, 10);
  // PIDMove2(33, 100, 5000, 10, 100, 0, 0);
  moveToDrive_limit(109, 68, 100, 100, 0, 5000, 10);
  // PIDMove_limit(28, 100, 5000, 2, 5, 0, 1);
  
  front_claw.set(true);

  // right neutral goal acquired
  
  fourBarFunction(200);
  moveToDriveBack(96, 40, 100, 20, 0, 3000, 5);
  goal_cover.set(false);
  PIDTurn(-110, 100, 1000, 2, 1, 0, 1);

  front_claw.set(false);
  wait(200);
  PIDMove2(-5, 100, 2000, 1, 7, 0, 0);
  fourBarFunction(-200);
  PIDTurn(-70, 100, 2500, 3, 1, 0, 1);
  sideTask(AUTO_CLAW);

  moveToDrive_limit(69, 71, 100, 10, 0, 5000, 10);
  front_claw.set(true);
  wait(200);

  // middle neutral goal acquired

  fourBarFunction(100);
  moveToDriveBack(106, 36, 100, 10, 0, 5000, 5);
  front_claw.set(false);
  wait(100);
  //PIDTurn(-85, 100, 1000, 2, 6, 0, 0);
  wait(200);
  moveToDriveBack(136, 37, 80, 8, 0, 1500, 10);
  BackClawAutoUp();

  // alliance goal acquired 

  // conveyorRotate();
  // moveToDriveMax(72, 42, 100, 6, 0, 2000, 10);
  PIDMove2(10, 100, 2000, 1, 6, 0, 0);
  PIDTurn(0, 100, 2000, 2, 1, 0, 1);
  conveyorRotate(75);
  //setPositionOdom(120, finalGlobalY, IMUAngle);
  fourBarFunction(650);
  moveToDrive(121.5, 82, 40, 6, 0, 6000, 5);
  moveToDriveBack(120, 30, 100, 10, 0, 3000, 10);
  wait(100);
  BackClawAutoDown();
  


}

void skills_macro_one(){
  task sideTaskOne = task(sideTaskSlotOne);

  setPositionOdom(27, 12, -90);
  front_claw.set(false);
  back_tilter.set(false);
  back_claw.set(false);


  PIDMove2(-6, 100, 750, 1, 6, 0, 0);
  goalDistanceCheck(); 
  wait(200);
  
  // Acquire alliance mobile goal

  fourBarFunction(-100);
  sideTask(AUTO_CLAW);
  moveToDrive(24, 36, 100, 10, 1, 5000, 15);
  conveyorRotate();
  moveToDrive(36, 75, 100, 10, 1, 5000, 10);
  front_claw.set(true); 

  // Left neutral goal acquired

  fourBarFunction(800, 100, false);
  moveToDrive(72, 97, 100, 5, 0, 4000, 5);
  back_tilter.set(false);
  wait(300);
  back_claw.set(false);

  moveToDrive(72, 118, 100, 8, 0, 1500, 6);

  fourBarFunction(-250, 100, false);
  wait(250);
  front_claw.set(false);

  Controller.rumble("-");
}


void climbTest(){
  setPositionOdom(27, 12, -90);
  front_claw.set(false);
  back_tilter.set(false);
  back_claw.set(false);

  PIDMove(8, 100, 3000, 2, 3, 0, 1);
  PIDTurn(0, 100, 5000, 1, 1, 0, 1);
  moveToDrive(72, 12, 75, 3, 1, 5000, 3);
}