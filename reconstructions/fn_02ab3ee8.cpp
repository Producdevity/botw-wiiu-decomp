extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021b7ea0(void*, const void*);

extern "C" void* fn_02ab3ee8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_021b7ea0(object, descriptor);
    }
    return object;
}
