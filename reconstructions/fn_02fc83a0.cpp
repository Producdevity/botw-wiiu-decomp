typedef signed char s8;
typedef unsigned char u8;
typedef int s32;

namespace {
struct Object {
    unsigned char padding_0[0x1C0C];
    u8 active;
};
}

extern "C" int fn_02fc7ef0(void*, void*);
extern "C" int fn_02fc7f9c(void*, int);
extern "C" void fn_02fc830c(void*, int);

extern "C" void fn_02fc83a0(void *object) {
    s32 state;

    state = fn_02fc7ef0(object, 0);
    if ((s8)((Object *)object)->active == 0) {
        if (((state == 2) || (state == 3)) && ((fn_02fc7f9c(object, 2) != 0) || (fn_02fc7f9c(object, 3) != 0))) {
            fn_02fc830c(object, 1);
        }
    } else if ((state == 0) || (state == 1)) {
        fn_02fc830c(object, 0);
    }
}
