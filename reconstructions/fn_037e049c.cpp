typedef int s32;

extern "C" void fn_0308e6d0(void *);
extern "C" void fn_030bb614(void *, unsigned);
extern "C" void fn_034fc3a8(void *, unsigned);
struct Object;
extern "C" void fn_037e58bc(Object *, unsigned);

extern "C" s32 data_1031ee28;
extern "C" s32 data_1031ee38;

namespace {
struct ObjectLayout {
    char padding_0[0x18];
    s32 *vtable_18;
    char padding_1C[4];
    s32 *vtable_20;
};
}

extern "C" void fn_037e049c(void *object, s32 flags) {
    if (object != 0) {
        ((ObjectLayout *)object)->vtable_18 = &data_1031ee28;
        ((ObjectLayout *)object)->vtable_20 = &data_1031ee38;
        fn_034fc3a8((char *)object + 0x114, 0U);
        fn_030bb614((char *)object + 0xB8, 2U);
        fn_030bb614((char *)object + 0x7C, 2U);
        fn_030bb614((char *)object + 0x40, 2U);
        fn_037e58bc((Object *)object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
