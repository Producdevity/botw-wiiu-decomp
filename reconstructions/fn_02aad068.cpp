extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021e7b34(void*, const void*);

extern "C" void* fn_02aad068(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_021e7b34(object, descriptor);
    }
    return object;
}
