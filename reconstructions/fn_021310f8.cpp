struct Opaque_021310f8 {
    unsigned char unknown_00[24];
    const void* vtable;
    unsigned char unknown_1c[68];
    unsigned char handle[12];
};
extern "C" const unsigned char data_10028e18[];
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);

extern "C" void fn_0327f58c(void* object, unsigned flags);
extern "C" void fn_021310f8(Opaque_021310f8* object, unsigned flags) {
    if (object) {
        object->vtable = data_10028e18;
        fn_0378da14(object->handle);
        fn_0327f58c(object, 0);
        if (flags & 1) fn_0308e6d0(object);
    }
}
