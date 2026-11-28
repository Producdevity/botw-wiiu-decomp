typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0308e6d4(void *);

namespace {
struct Object {
    char padding_0[0x1C];
    void *child;
};
}

extern "C" void fn_030ac96c(void *object, s32 flags) {
    if (object != 0) {
        void *child = ((Object *)object)->child;
        if (child != 0) {
            fn_0308e6d4(child);
        }
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
