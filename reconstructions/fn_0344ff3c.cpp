typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03485a50(void*, void*);

extern "C" s32 data_102c7efc;

namespace {
struct Layout {
    char padding_0[0x10];
    s32 *vtable;
};
}

extern "C" void fn_0344ff3c(void *object, s32 flags) {
    if (object != 0) {
        ((Layout *) object)->vtable = &data_102c7efc;
        fn_03485a50(object, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
