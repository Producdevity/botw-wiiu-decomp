extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020d3718(void*, const void*);

extern "C" void* fn_02aadac4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_020d3718(object, descriptor);
    }
    return object;
}
