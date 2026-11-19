extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025ae1c0(void*, const void*);

extern "C" void* fn_02acd430(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(716, allocator, 4);
    if (object) {
        object = fn_025ae1c0(object, descriptor);
    }
    return object;
}
