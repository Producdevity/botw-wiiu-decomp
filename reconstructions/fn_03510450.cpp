typedef float f32;

extern "C" void fn_03510d48(void*, int, float);
extern "C" void* fn_03510f04(void *, void *);
struct LinearRamp;
extern "C" void fn_03bb5814(LinearRamp *);

namespace {
struct Owner {
    char padding_0[0xC];
    char anchor[0x134];
    f32 ramp;
    char padding_144[0x10];
    void *target;
};
}

extern "C" void fn_03510450(void *owner) {
    void *target;

    fn_03bb5814((LinearRamp *)&((Owner *)owner)->ramp);
    target = ((Owner *)owner)->target;
    if ((target != 0) && (fn_03510f04(target, ((Owner *)owner)->anchor) != 0)) {
        fn_03510d48(((Owner *)owner)->target, 1, ((Owner *)owner)->ramp);
    }
}
