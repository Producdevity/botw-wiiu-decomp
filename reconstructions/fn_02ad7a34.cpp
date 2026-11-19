extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028926b4(void*, const void*);

extern "C" void* fn_02ad7a34(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(100, allocator, 4);
    if (object) {
        object = fn_028926b4(object, descriptor);
    }
    return object;
}
