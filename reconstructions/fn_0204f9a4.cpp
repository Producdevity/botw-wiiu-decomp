struct Opaque_0204f9a4 {
    unsigned char unknown_00[8];
    unsigned char handle[20];
    const void* vtable;
};
extern "C" const unsigned char data_10009a48[];
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
extern "C" void fn_0204f9a4(Opaque_0204f9a4* object, unsigned flags) {
    if (object) {
        object->vtable = data_10009a48;
        fn_0378da14(object->handle);
        if (flags & 1) fn_0308e6d0(object);
    }
}
