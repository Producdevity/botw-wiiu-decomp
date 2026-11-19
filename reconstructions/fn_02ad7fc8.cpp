extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028a2a70(void*, const void*);

extern "C" void* fn_02ad7fc8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(676, allocator, 4);
    if (object) {
        object = fn_028a2a70(object, descriptor);
    }
    return object;
}
