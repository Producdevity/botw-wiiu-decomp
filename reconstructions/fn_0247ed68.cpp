typedef int s32;

extern "C" void fn_02af3f8c(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_03126a1c(void *, s32);

extern "C" s32 data_100c0a58;
extern "C" s32 data_100c0a68;
extern "C" s32 data_100c0a80;

namespace {
struct Object {
    s32 *vtable;
    char padding_4[0xE8];
    s32 *vtable_EC;
    s32 *vtable_F0;
};
}

extern "C" void fn_0247ed68(void *object, s32 flags) {
    if (object != 0) {
        ((Object *)object)->vtable = &data_100c0a58;
        ((Object *)object)->vtable_F0 = &data_100c0a68;
        ((Object *)object)->vtable_EC = &data_100c0a80;
        fn_03126a1c((char *)object + 0x7D0, 2);
        fn_02af3f8c(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
