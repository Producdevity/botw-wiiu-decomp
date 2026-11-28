typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03ba3634(void *, unsigned);

extern "C" s32 data_103c6658;

namespace {
struct Layout {
    char padding_0[0x14];
    s32 *vtable;
};
}

extern "C" void fn_03b96480(void *object, s32 flags) {
    if (object != 0) {
        ((Layout *) object)->vtable = &data_103c6658;
        fn_03ba3634(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
