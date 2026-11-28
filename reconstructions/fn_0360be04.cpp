extern "C" void fn_030bb614(void*, unsigned);
extern "C" void fn_03605650(void*, unsigned);
extern "C" void fn_0308e6d0(void*);

extern "C" int data_102fa808;
extern "C" int data_102fa818;
extern "C" int data_102fa830;

namespace {
struct Object {
    char padding_0[0x10];
    void *vtable_10;
    char padding_14[0x90];
    void *vtable_A4;
    void *vtable_A8;
};
}

extern "C" void fn_0360be04(void* object, int flags) {
    if (object != 0) {
        ((Object *)object)->vtable_10 = &data_102fa808;
        ((Object *)object)->vtable_A8 = &data_102fa818;
        ((Object *)object)->vtable_A4 = &data_102fa830;
        fn_030bb614((char*)object + 0x410, 2U);
        fn_03605650(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
