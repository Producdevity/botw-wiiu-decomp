extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022fb470(void*, const void*);

extern "C" void* fn_02abc4c8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_022fb470(object, descriptor);
    }
    return object;
}
