extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027ea3dc(void*, const void*);

extern "C" void* fn_02ad51d4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_027ea3dc(object, descriptor);
    }
    return object;
}
