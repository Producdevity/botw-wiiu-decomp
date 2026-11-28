typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_04217fd4(void *, unsigned);

extern "C" s32 data_103dba98;

namespace {
struct Layout {
    char padding_0[0x34];
    s32 *vtable;
};
}

extern "C" void fn_03c18c48(void *object, void *flags) {
    if (object != 0) {
        ((Layout *) object)->vtable = &data_103dba98;
        fn_04217fd4((char *)object + 8, 2U);
        if ((s32) flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
