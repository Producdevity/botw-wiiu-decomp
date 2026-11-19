extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02163a88(void*, const void*);

extern "C" void* fn_02ab1db4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_02163a88(object, descriptor);
    }
    return object;
}
