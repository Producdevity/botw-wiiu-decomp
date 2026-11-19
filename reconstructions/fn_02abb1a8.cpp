extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022be050(void*, const void*);

extern "C" void* fn_02abb1a8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_022be050(object, descriptor);
    }
    return object;
}
