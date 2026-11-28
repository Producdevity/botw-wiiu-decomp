extern "C" void fn_03061c14(void*, unsigned);
extern "C" void fn_03008534(void*, unsigned);
extern "C" void fn_0308e6d0(void*);

extern "C" int data_10259204;
extern "C" int data_10259214;
extern "C" int data_1025922c;

namespace {
struct Object {
    char padding_0[0x10];
    void *vtable_10;
    char padding_14[0x90];
    void *vtable_A4;
    void *vtable_A8;
};
}

extern "C" void fn_0303f9a0(void* object, int flags) {
    if (object != 0) {
        ((Object *)object)->vtable_10 = &data_10259204;
        ((Object *)object)->vtable_A8 = &data_10259214;
        ((Object *)object)->vtable_A4 = &data_1025922c;
        fn_03061c14((char*)object + 0x1BA8, 2U);
        fn_03008534(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
