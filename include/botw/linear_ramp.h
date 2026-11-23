#ifndef BOTW_LINEAR_RAMP_H
#define BOTW_LINEAR_RAMP_H

struct LinearRamp {
    float start;
    float current;
    float target;
    float rate;
};
typedef char LinearRampSize[sizeof(LinearRamp) == 16 ? 1 : -1];

extern "C" void fn_03bb572c(LinearRamp* ramp, float value);
extern "C" float fn_03bb57ac(LinearRamp* ramp);
extern "C" void fn_03bb5860(LinearRamp* ramp, float target, float duration);

#endif
