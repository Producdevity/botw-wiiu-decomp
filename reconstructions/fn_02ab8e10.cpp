extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022597cc(void*, const void*);

extern "C" void* fn_02ab8e10(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(124, allocator, 4);
    if (object) {
        object = fn_022597cc(object, descriptor);
    }
    return object;
}
