typedef int s32;

extern "C" void fn_0308e6d0(void *);
struct MutexOwner;
extern "C" void fn_030bb7f8(MutexOwner *);

namespace {
struct Object {
    unsigned char padding_0[4];
    s32 owner;
};
}

extern "C" void fn_034d69e4(void *object, s32 flags) {
    if (object != 0) {
        s32 owner = ((Object *)object)->owner;
        if (owner != 0) {
            fn_030bb7f8((MutexOwner *)(owner + 8));
        }
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
