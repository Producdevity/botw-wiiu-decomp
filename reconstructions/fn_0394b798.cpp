typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_0394b54c(void*, void*);

extern "C" s32 data_1033ff38;

namespace {
struct Layout {
    char padding_0[0x10];
    s32 *vtable;
};
}

extern "C" void fn_0394b798(void *object, s32 flags) {
    if (object != 0) {
        ((Layout *) object)->vtable = &data_1033ff38;
        fn_0394b54c((char *)object + 4, 0);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
