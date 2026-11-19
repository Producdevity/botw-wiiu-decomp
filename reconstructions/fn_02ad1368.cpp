extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028a67e0(void*, const void*);

extern "C" void* fn_02ad1368(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(196, allocator, 4);
    if (object) {
        object = fn_028a67e0(object, descriptor);
    }
    return object;
}
