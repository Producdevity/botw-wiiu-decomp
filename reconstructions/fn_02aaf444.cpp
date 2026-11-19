extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02126940(void*, const void*);

extern "C" void* fn_02aaf444(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(136, allocator, 4);
    if (object) {
        object = fn_02126940(object, descriptor);
    }
    return object;
}
