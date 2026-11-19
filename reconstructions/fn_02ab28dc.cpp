extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0217bf64(void*, const void*);

extern "C" void* fn_02ab28dc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_0217bf64(object, descriptor);
    }
    return object;
}
