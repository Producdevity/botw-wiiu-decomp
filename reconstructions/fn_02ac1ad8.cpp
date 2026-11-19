extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02089b20(void*, const void*);

extern "C" void* fn_02ac1ad8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(260, allocator, 4);
    if (object) {
        object = fn_02089b20(object, descriptor);
    }
    return object;
}
