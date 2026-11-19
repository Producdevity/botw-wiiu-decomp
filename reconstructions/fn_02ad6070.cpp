extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02832bbc(void*, const void*);

extern "C" void* fn_02ad6070(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_02832bbc(object, descriptor);
    }
    return object;
}
