extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028573d8(void*, const void*);

extern "C" void* fn_02ad6a44(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_028573d8(object, descriptor);
    }
    return object;
}
