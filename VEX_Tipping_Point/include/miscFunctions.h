void BackClawAutoUp();

void BackClawAutoDown();

void fourBarFunction(double dist, double speed = 100, bool waitComplete = false);

void conveyorRotate(double speed = 80);

void goalDistanceCheck();

void somethingFunny();

void backGoalCheck();

void auto_claw();

#define FREE 0
#define AUTO_CLAW 1

extern int sideTaskOneHolder;

int sideTaskSlotOne();

void sideTask(int Task);

int check_conv();

void autoClimbCheck();