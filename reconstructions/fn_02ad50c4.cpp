extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02d2f8f0(void*, const void*);

extern "C" void* fn_02ad50c4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(108, allocator, 4);
    if (object) {
        object = fn_02d2f8f0(object, descriptor);
    }
    return object;
}
