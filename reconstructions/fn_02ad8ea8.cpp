extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028fc854(void*, const void*);

extern "C" void* fn_02ad8ea8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(160, allocator, 4);
    if (object) {
        object = fn_028fc854(object, descriptor);
    }
    return object;
}
