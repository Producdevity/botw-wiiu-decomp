typedef int s32;

extern "C" void fn_02de5ab8(void*, int);
extern "C" void fn_02de6728(void *, unsigned);
extern "C" void fn_0308e6d0(void *);

extern "C" s32 data_101ee44c;
extern "C" s32 data_101ee474;

namespace {
struct Object {
    s32 *vtable;
    char padding_4[0x130];
    s32 *vtable_134;
};
}

extern "C" void fn_02de3778(void *object, s32 flags) {
    if (object != 0) {
        ((Object *)object)->vtable = &data_101ee44c;
        ((Object *)object)->vtable_134 = &data_101ee474;
        fn_02de5ab8((char *)object + 0x1C8, 2);
        fn_02de5ab8((char *)object + 0x1BC, 2);
        fn_02de6728((char *)object + 4, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
