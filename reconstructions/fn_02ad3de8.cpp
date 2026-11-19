extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027b2030(void*, const void*);

extern "C" void* fn_02ad3de8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(84, allocator, 4);
    if (object) {
        object = fn_027b2030(object, descriptor);
    }
    return object;
}
