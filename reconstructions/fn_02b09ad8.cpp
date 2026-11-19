extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a790ec(void*, const void*);

extern "C" void* fn_02b09ad8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_02a790ec(object, descriptor);
    }
    return object;
}
