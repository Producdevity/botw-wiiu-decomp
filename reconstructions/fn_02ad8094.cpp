extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028a60e4(void*, const void*);

extern "C" void* fn_02ad8094(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(108, allocator, 4);
    if (object) {
        object = fn_028a60e4(object, descriptor);
    }
    return object;
}
