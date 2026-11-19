extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028303d8(void*, const void*);

extern "C" void* fn_02ad5fe8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(208, allocator, 4);
    if (object) {
        object = fn_028303d8(object, descriptor);
    }
    return object;
}
