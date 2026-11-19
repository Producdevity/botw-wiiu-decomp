extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021550a8(void*, const void*);

extern "C" void* fn_02ab1424(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(304, allocator, 4);
    if (object) {
        object = fn_021550a8(object, descriptor);
    }
    return object;
}
