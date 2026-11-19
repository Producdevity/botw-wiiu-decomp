extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028911a8(void*, const void*);

extern "C" void* fn_02ad7924(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_028911a8(object, descriptor);
    }
    return object;
}
