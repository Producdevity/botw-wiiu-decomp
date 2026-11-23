#include "botw/linear_ramp.h"

extern "C" void fn_03bb5814(LinearRamp* ramp) {
    if (ramp->start != ramp->target) {
        ramp->start = ramp->current;
        ramp->current = fn_03bb57ac(ramp);
    }
}
