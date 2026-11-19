extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02776550(void*, const void*);

extern "C" void* fn_02ad3920(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(972, allocator, 4);
    if (object) {
        object = fn_02776550(object, descriptor);
    }
    return object;
}
