#include "botw/linear_ramp.h"

extern "C" const float data_103cbab4;

extern "C" void fn_03bb5860(LinearRamp* ramp, float target, float duration) {
    if (data_103cbab4 > duration) {
        return;
    }
    ramp->target = target;
    if (target == ramp->start || duration == data_103cbab4) {
        fn_03bb572c(ramp, target);
    } else {
        ramp->rate = (target - ramp->start) / duration;
        ramp->current = fn_03bb57ac(ramp);
    }
}
