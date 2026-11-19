extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023a1204(void*, const void*);

extern "C" void* fn_02ac3348(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_023a1204(object, descriptor);
    }
    return object;
}
