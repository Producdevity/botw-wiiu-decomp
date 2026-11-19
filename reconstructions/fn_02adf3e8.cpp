extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029d46f0(void*, const void*);

extern "C" void* fn_02adf3e8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_029d46f0(object, descriptor);
    }
    return object;
}
