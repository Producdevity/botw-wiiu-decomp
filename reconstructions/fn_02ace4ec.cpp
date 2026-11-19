extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02609698(void*, const void*);

extern "C" void* fn_02ace4ec(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_02609698(object, descriptor);
    }
    return object;
}
