extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0285aba8(void*, const void*);

extern "C" void* fn_02ad6b10(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_0285aba8(object, descriptor);
    }
    return object;
}
