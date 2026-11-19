extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a64b78(void*, const void*);

extern "C" void* fn_02b09148(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_02a64b78(object, descriptor);
    }
    return object;
}
