typedef int s32;
typedef float f32;

extern "C" void fn_02f7cce8(void*, int, int, int);

extern "C" f32 data_10232c94;

namespace {
struct Target {
    unsigned char padding_0[0x14];
    void* const* vtable;
};

struct Owner {
    unsigned char padding_0[0x1B6C];
    Target *target;
    void* const* vtable;
};
}

extern "C" void fn_02f7cf60(void *owner, s32 first, s32 second, s32 third) {
    Target *target;
    void* const* vtable;

    target = ((Owner *)owner)->target;
    vtable = target->vtable;
    ((s32 (*)(void *, f32))vtable[47])(target, data_10232c94);
    fn_02f7cce8(owner, 2, first, 1);
    fn_02f7cce8(owner, 1, second, 1);
    fn_02f7cce8(owner, 0, third, 1);
}
