extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02871800(void*, const void*);

extern "C" void* fn_02ad6f94(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(264, allocator, 4);
    if (object) {
        object = fn_02871800(object, descriptor);
    }
    return object;
}
