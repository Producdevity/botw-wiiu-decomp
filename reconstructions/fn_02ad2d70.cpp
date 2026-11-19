extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02749274(void*, const void*);

extern "C" void* fn_02ad2d70(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_02749274(object, descriptor);
    }
    return object;
}
