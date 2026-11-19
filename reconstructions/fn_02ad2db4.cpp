extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0274a394(void*, const void*);

extern "C" void* fn_02ad2db4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(152, allocator, 4);
    if (object) {
        object = fn_0274a394(object, descriptor);
    }
    return object;
}
