extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021e4194(void*, const void*);

extern "C" void* fn_02ab5c64(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(92, allocator, 4);
    if (object) {
        object = fn_021e4194(object, descriptor);
    }
    return object;
}
