typedef float f32;

extern "C" void fn_0317be7c(void*);
extern "C" void fn_0317f94c(void*, float);

extern "C" f32 data_100e87b0;

namespace {
struct Owner {
    unsigned char padding_0[0x38C];
    void *effect;
};
}

extern "C" void fn_02598958(void **arg0) {
    void *effect;

    effect = ((Owner *)*arg0)->effect;
    if (effect != 0) {
        fn_0317f94c(effect, data_100e87b0);
        fn_0317be7c(effect);
    }
}
