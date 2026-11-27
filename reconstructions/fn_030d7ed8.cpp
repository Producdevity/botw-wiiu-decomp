typedef signed char s8;
typedef int s32;

extern "C" int fn_030d730c(void*);
extern "C" void fn_030d733c(int, int);

namespace {
struct Object {
    unsigned char padding_0[0x79];
    s8 mode;
};
}

extern "C" void fn_030d7ed8(void *arg0) {
    s32 mode = fn_030d730c(arg0);
    fn_030d733c((s32) arg0, mode);
    ((Object *)arg0)->mode = (s8) mode;
}
