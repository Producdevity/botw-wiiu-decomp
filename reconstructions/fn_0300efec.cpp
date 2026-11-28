extern "C" void fn_0305d994(void*, unsigned);
extern "C" void fn_03008534(void*, unsigned);
extern "C" void fn_0308e6d0(void*);

extern "C" int data_10250b38;
extern "C" int data_10250b48;
extern "C" int data_10250b60;

namespace {
struct Object {
    char padding_0[0x10];
    void *vtable_10;
    char padding_14[0x90];
    void *vtable_A4;
    void *vtable_A8;
};
}

extern "C" void fn_0300efec(void* object, int flags) {
    if (object != 0) {
        ((Object *)object)->vtable_10 = &data_10250b38;
        ((Object *)object)->vtable_A8 = &data_10250b48;
        ((Object *)object)->vtable_A4 = &data_10250b60;
        fn_0305d994((char*)object + 0x1B68, 2U);
        fn_03008534(object, 0U);
        if (flags & 1) {
            fn_0308e6d0(object);
        }
    }
}
