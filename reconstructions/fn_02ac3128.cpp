extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0239cf24(void*, const void*);

extern "C" void* fn_02ac3128(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_0239cf24(object, descriptor);
    }
    return object;
}
