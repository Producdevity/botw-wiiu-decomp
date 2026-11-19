extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0212bac4(void*, const void*);

extern "C" void* fn_02aaf3bc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(204, allocator, 4);
    if (object) {
        object = fn_0212bac4(object, descriptor);
    }
    return object;
}
