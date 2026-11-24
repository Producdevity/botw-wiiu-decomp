struct Opaque_032c3d18 {
    unsigned char unknown_00[20];
    const void* vtable;
};
extern "C" const unsigned char data_102a77d4[];
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
extern "C" void fn_032c37b4(void* object);
extern "C" void fn_032c3d18(Opaque_032c3d18* object, unsigned flags) {
    if (object) {
        void* self = object;
        object->vtable = data_102a77d4;
        fn_032c37b4(self);
        fn_0378da14(object);
        if (flags & 1) fn_0308e6d0(object);
    }
}
