extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032628c8(void*, const void*);

extern "C" void* fn_02aaaeac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_032628c8(object, descriptor);
    }
    return object;
}
