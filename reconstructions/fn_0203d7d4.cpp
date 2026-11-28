typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03464014(void*, int);

namespace {
struct Object {
    char padding_0[4];
    void *child;
};
}

extern "C" void fn_0203d7d4(void *object, s32 flags) {
    void *child;

    if (object != 0) {
        child = ((Object *)object)->child;
        if (child != 0) {
            fn_03464014(child, 3);
        }
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
