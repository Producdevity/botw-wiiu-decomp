extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0288d5bc(void*, const void*);

extern "C" void* fn_02ad7748(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_0288d5bc(object, descriptor);
    }
    return object;
}
