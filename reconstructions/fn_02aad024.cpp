extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020be884(void*, const void*);

extern "C" void* fn_02aad024(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_020be884(object, descriptor);
    }
    return object;
}
