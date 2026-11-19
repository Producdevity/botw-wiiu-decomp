extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028e3ad8(void*, const void*);

extern "C" void* fn_02ad88d0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_028e3ad8(object, descriptor);
    }
    return object;
}
