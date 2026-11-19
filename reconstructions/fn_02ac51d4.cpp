extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023f8fec(void*, const void*);

extern "C" void* fn_02ac51d4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_023f8fec(object, descriptor);
    }
    return object;
}
