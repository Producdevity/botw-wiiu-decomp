struct Opaque_0331b1c0 {
    void* resource;
    unsigned char handle[12];
};
extern "C" void* data_1046fe50;
extern "C" void fn_0378da14(void* handle);
extern "C" void fn_0308e6d0(void* memory);
extern "C" void fn_03479bc8(void*, void*);
extern "C" void fn_0331b1c0(Opaque_0331b1c0* object, unsigned flags) {
    if (object) {
        if (object->resource) {
            fn_03479bc8(data_1046fe50, object->resource);
            void* cleared = 0;
            object->resource = cleared;
        }
        fn_0378da14(object->handle);
        if (flags & 1) fn_0308e6d0(object);
    }
}
