extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022296ac(void*, const void*);

extern "C" void* fn_02ab7d98(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_022296ac(object, descriptor);
    }
    return object;
}
