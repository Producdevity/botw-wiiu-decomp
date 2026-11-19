extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0250c1f0(void*, const void*);

extern "C" void* fn_02aca6c4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(136, allocator, 4);
    if (object) {
        object = fn_0250c1f0(object, descriptor);
    }
    return object;
}
