typedef int s32;

extern "C" int fn_03253098(void*, void*);

namespace {
struct Object {
    unsigned char padding_0[0x20];
    s32 state;
    unsigned char padding_24[0x910];
    void *target;
};
}

extern "C" void fn_03253140(void *object) {
    s32 state = 0;
    if (fn_03253098(object, ((Object *)object)->target) == 0) {
        state = 3;
    }
    ((Object *)object)->state = state;
}
