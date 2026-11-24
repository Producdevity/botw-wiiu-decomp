struct Opaque_02562d6c {
    unsigned char unknown_00[32];
    unsigned char handle[20];
    const void* vtable;
};
extern "C" const unsigned char data_100e07bc[];
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);

extern "C" void fn_037b7d90(void* object, unsigned flags);
extern "C" void fn_02562d6c(Opaque_02562d6c* object, unsigned flags) {
    if (object) {
        object->vtable = data_100e07bc;
        fn_0378da14(object->handle);
        fn_037b7d90(object, 0);
        if (flags & 1) fn_0308e6d0(object);
    }
}
