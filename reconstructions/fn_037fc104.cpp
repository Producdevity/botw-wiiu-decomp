typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_04214ad4(void *, unsigned);

extern "C" s32 data_103206c4;

namespace {
struct Layout {
    char padding_0[0x38];
    s32 *vtable;
};
}

extern "C" void fn_037fc104(void *object, s32 flags) {
    if (object != 0) {
        ((Layout *) object)->vtable = &data_103206c4;
        fn_04214ad4(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
