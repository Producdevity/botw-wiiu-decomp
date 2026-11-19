extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022008ec(void*, const void*);

extern "C" void* fn_02ab667c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_022008ec(object, descriptor);
    }
    return object;
}
