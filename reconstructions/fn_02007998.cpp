typedef int s32;
typedef unsigned int u32;

extern "C" void fn_02af3f8c(void *, unsigned);
extern "C" void fn_0308e6d0(void *);
extern "C" void fn_033bcc70(void*, int);

extern "C" s32 data_100027f8;
extern "C" s32 data_10002808;
extern "C" s32 data_10002820;

namespace {
struct Object {
    s32 *vtable;
    char padding_4[0xE8];
    s32 *vtable_EC;
    s32 *vtable_F0;
};
}

extern "C" void fn_02007998(void *object, u32 flags) {
    if (object != 0) {
        ((Object *)object)->vtable = &data_100027f8;
        ((Object *)object)->vtable_F0 = &data_10002808;
        ((Object *)object)->vtable_EC = &data_10002820;
        fn_033bcc70((char *)object + 0x7CC, 2);
        fn_02af3f8c(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
