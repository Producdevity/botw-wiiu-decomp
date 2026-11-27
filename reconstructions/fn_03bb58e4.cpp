struct LinearRamp;
extern "C" void fn_03bb572c(LinearRamp *, float);
struct LinearRamp;
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

extern "C" void fn_03bb58e4(int arg0, void *arg1, void *arg2, void *arg3, float farg0, float farg1)
{
    float current;
    float rate;
    rate = farg1;
    if (!(data_103cbab4 > rate)) {
        current = ((Ramp*) arg0)->current;
        ((Ramp*) arg0)->target = farg0;
        if (farg0 == ((Ramp*) arg0)->current || rate == data_103cbab4) {
            fn_03bb572c((LinearRamp*) arg0, farg0);
            return;
        }
        if (!((farg0 - current) > data_103cbab4)) {
            rate = -rate;
        }
        ((Ramp*) arg0)->rate = rate;
        ((Ramp*) arg0)->step = fn_03bb57ac((LinearRamp*) arg0);
    }
}
