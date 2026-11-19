extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022f8258(void*, const void*);

extern "C" void* fn_02abc440(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_022f8258(object, descriptor);
    }
    return object;
}
