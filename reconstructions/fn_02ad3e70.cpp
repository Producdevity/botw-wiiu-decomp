extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027b4df4(void*, const void*);

extern "C" void* fn_02ad3e70(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_027b4df4(object, descriptor);
    }
    return object;
}
