struct LinearRamp;
extern "C" void fn_03bb572c(LinearRamp *, float);
extern "C" float fn_03bb57ac(LinearRamp *);
extern "C" const float data_103cbab4;

namespace {
struct Ramp {
    float current;
    float step;
    float target;
    float rate;
};
}

extern "C" void fn_03bb58e4(int ramp_address, void *unused1, void *unused2, void *unused3, float new_target, float new_rate)
{
    float current;
    float rate;
    rate = new_rate;
    if (!(data_103cbab4 > rate)) {
        current = ((Ramp*) ramp_address)->current;
        ((Ramp*) ramp_address)->target = new_target;
        if (new_target == ((Ramp*) ramp_address)->current || rate == data_103cbab4) {
            fn_03bb572c((LinearRamp*) ramp_address, new_target);
            return;
        }
        if (!((new_target - current) > data_103cbab4)) {
            rate = -rate;
        }
        ((Ramp*) ramp_address)->rate = rate;
        ((Ramp*) ramp_address)->step = fn_03bb57ac((LinearRamp*) ramp_address);
    }
}
