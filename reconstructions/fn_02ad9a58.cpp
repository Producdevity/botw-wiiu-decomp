extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0291b478(void*, const void*);

extern "C" void* fn_02ad9a58(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_0291b478(object, descriptor);
    }
    return object;
}
