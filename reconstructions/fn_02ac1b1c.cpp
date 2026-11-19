extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02089f54(void*, const void*);

extern "C" void* fn_02ac1b1c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(160, allocator, 4);
    if (object) {
        object = fn_02089f54(object, descriptor);
    }
    return object;
}
