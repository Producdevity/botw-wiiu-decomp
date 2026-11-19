extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021e2b94(void*, const void*);

extern "C" void* fn_02ab5bdc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_021e2b94(object, descriptor);
    }
    return object;
}
