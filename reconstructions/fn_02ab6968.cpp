extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022070d8(void*, const void*);

extern "C" void* fn_02ab6968(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(128, allocator, 4);
    if (object) {
        object = fn_022070d8(object, descriptor);
    }
    return object;
}
