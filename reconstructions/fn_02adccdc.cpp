extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029ad060(void*, const void*);

extern "C" void* fn_02adccdc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_029ad060(object, descriptor);
    }
    return object;
}
