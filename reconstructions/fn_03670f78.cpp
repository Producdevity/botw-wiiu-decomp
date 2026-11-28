typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030dfefc(void *, unsigned);

extern "C" s32 data_10302a38;

namespace {
struct Layout {
    char padding_0[0xC];
    s32 *vtable;
};
}

extern "C" void fn_03670f78(void *object, void *flags) {
    if (object != 0) {
        ((Layout *) object)->vtable = &data_10302a38;
        fn_030dfefc(object, 0U);
        if ((s32) flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
