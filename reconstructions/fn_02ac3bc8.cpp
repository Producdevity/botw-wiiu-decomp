extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023acb88(void*, const void*);

extern "C" void* fn_02ac3bc8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_023acb88(object, descriptor);
    }
    return object;
}
