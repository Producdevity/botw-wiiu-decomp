extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02915dd4(void*, const void*);

extern "C" void* fn_02ad9838(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_02915dd4(object, descriptor);
    }
    return object;
}
