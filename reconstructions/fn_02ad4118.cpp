extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027d05c4(void*, const void*);

extern "C" void* fn_02ad4118(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(516, allocator, 4);
    if (object) {
        object = fn_027d05c4(object, descriptor);
    }
    return object;
}
