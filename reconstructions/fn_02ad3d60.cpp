extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027a5f74(void*, const void*);

extern "C" void* fn_02ad3d60(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(428, allocator, 4);
    if (object) {
        object = fn_027a5f74(object, descriptor);
    }
    return object;
}
