extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022180dc(void*, const void*);

extern "C" void* fn_02ab72b4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(108, allocator, 4);
    if (object) {
        object = fn_022180dc(object, descriptor);
    }
    return object;
}
