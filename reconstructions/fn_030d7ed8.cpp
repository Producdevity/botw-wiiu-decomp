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

extern "C" void fn_030d7ed8(void *self) {
    s32 mode = fn_030d730c(self);
    fn_030d733c((s32) self, mode);
    ((Object *)self)->mode = (s8) mode;
}
