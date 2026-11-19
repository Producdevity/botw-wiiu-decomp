extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022ce6c4(void*, const void*);

extern "C" void* fn_02abb780(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(108, allocator, 4);
    if (object) {
        object = fn_022ce6c4(object, descriptor);
    }
    return object;
}
