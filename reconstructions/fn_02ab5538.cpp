extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021e1b94(void*, const void*);

extern "C" void* fn_02ab5538(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_021e1b94(object, descriptor);
    }
    return object;
}
