extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027e4840(void*, const void*);

extern "C" void* fn_02ad4998(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_027e4840(object, descriptor);
    }
    return object;
}
