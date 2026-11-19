extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025b50bc(void*, const void*);

extern "C" void* fn_02acd540(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_025b50bc(object, descriptor);
    }
    return object;
}
