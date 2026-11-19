extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0211cca8(void*, const void*);

extern "C" void* fn_02aaf224(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_0211cca8(object, descriptor);
    }
    return object;
}
