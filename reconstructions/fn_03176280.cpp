struct Opaque_03176280 {
    const void* vtable;
    unsigned char handle[12];
};
extern "C" const unsigned char data_1028af00[];
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
extern "C" void fn_03176280(void* raw, int flags) {
    Opaque_03176280* object = static_cast<Opaque_03176280*>(raw);
    if (object) {
        object->vtable = data_1028af00;
        fn_0378da14(object->handle);
        fn_0378da14(object->handle);
        if (flags & 1) fn_0308e6d0(object);
    }
}
