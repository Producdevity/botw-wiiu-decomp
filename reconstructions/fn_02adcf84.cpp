extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029af6f8(void*, const void*);

extern "C" void* fn_02adcf84(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_029af6f8(object, descriptor);
    }
    return object;
}
