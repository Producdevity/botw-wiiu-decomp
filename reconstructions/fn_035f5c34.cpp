typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03605650(void *, unsigned);
extern "C" void fn_03a3c398(void *, unsigned);

extern "C" s32 data_102f60b4;
extern "C" s32 data_102f60c4;
extern "C" s32 data_102f60dc;

namespace {
struct Object {
    char padding_0[0x10];
    void *vtable_10;
    char padding_14[0x90];
    void *vtable_A4;
    void *vtable_A8;
};
}

extern "C" void fn_035f5c34(void *object, s32 flags) {
    if (object != 0) {
        ((Object *)object)->vtable_10 = &data_102f60b4;
        ((Object *)object)->vtable_A8 = &data_102f60c4;
        ((Object *)object)->vtable_A4 = &data_102f60dc;
        fn_03a3c398((char *)object + 0x1D4, 2U);
        fn_03a3c398((char *)object + 0x1C4, 2U);
        fn_03605650(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
