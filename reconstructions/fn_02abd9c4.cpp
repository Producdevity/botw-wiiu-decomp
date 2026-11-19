extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023055d0(void*, const void*);

extern "C" void* fn_02abd9c4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(116, allocator, 4);
    if (object) {
        object = fn_023055d0(object, descriptor);
    }
    return object;
}
