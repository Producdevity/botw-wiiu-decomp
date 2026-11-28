typedef int s32;

extern "C" void fn_0350e33c(void*);

namespace {
struct Target {
    unsigned char padding_0[0x2C0];
    s32 flags;
};

struct Object {
    unsigned char padding_0[0x24];
    Target *target;
};
}

extern "C" void fn_035048dc(void *object) {
    fn_0350e33c(object);
    Target *target = ((Object *)object)->target;
    if (target != 0) {
        target->flags |= 0x400;
    }
}
