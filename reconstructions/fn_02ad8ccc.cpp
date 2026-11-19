extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028f61a8(void*, const void*);

extern "C" void* fn_02ad8ccc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_028f61a8(object, descriptor);
    }
    return object;
}
