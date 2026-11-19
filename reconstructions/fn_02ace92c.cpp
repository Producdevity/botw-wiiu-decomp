extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02628cb0(void*, const void*);

extern "C" void* fn_02ace92c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_02628cb0(object, descriptor);
    }
    return object;
}
