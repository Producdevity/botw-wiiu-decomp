extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a95238(void*, const void*);

extern "C" void* fn_02b0a6cc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_02a95238(object, descriptor);
    }
    return object;
}
