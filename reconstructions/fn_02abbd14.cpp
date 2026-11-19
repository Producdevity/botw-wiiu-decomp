extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022e75e8(void*, const void*);

extern "C" void* fn_02abbd14(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(128, allocator, 4);
    if (object) {
        object = fn_022e75e8(object, descriptor);
    }
    return object;
}
