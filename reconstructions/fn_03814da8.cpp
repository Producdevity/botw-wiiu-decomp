typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03814cb0(void*, void*);

extern "C" s32 data_10322108;

namespace {
struct Layout {
    char padding_0[0x10];
    s32 *vtable;
};
}

extern "C" void fn_03814da8(void *object, s32 flags) {
    if (object != 0) {
        ((Layout *) object)->vtable = &data_10322108;
        fn_03814cb0(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
