/*vex-vision-config:begin*/
#include "vex.h"
vex::vision::signature RED = vex::vision::signature (1, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision::signature BLUE = vex::vision::signature (2, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision::signature YELLOW = vex::vision::signature (3, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision::signature SIG_4 = vex::vision::signature (4, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision::signature SIG_5 = vex::vision::signature (5, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision::signature SIG_6 = vex::vision::signature (6, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision::signature SIG_7 = vex::vision::signature (7, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision Vision = vex::vision (vex::PORT17, 50, RED, BLUE, YELLOW, SIG_4, SIG_5, SIG_6, SIG_7);
/*vex-vision-config:end*/