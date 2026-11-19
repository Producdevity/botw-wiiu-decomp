extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020dd4d8(void*, const void*);

extern "C" void* fn_02aadec0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_020dd4d8(object, descriptor);
    }
    return object;
}
