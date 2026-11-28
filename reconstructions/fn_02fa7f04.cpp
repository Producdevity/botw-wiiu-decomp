extern "C" void fn_02e6bf5c(void*, unsigned);
extern "C" void fn_03008534(void*, unsigned);
extern "C" void fn_0308e6d0(void*);

extern "C" int data_1023f030;
extern "C" int data_1023f040;
extern "C" int data_1023f058;

namespace {
struct Object {
    char padding_0[0x10];
    void *vtable_10;
    char padding_14[0x90];
    void *vtable_A4;
    void *vtable_A8;
};
}

extern "C" void fn_02fa7f04(void* object, int flags) {
    if (object != 0) {
        ((Object *)object)->vtable_10 = &data_1023f030;
        ((Object *)object)->vtable_A8 = &data_1023f040;
        ((Object *)object)->vtable_A4 = &data_1023f058;
        fn_02e6bf5c((char*)object + 0x1B90, 2U);
        fn_03008534(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
