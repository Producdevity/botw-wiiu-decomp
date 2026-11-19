extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0217e6b0(void*, const void*);

extern "C" void* fn_02ab29ec(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(116, allocator, 4);
    if (object) {
        object = fn_0217e6b0(object, descriptor);
    }
    return object;
}
