extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0293f5a8(void*, const void*);

extern "C" void* fn_02ada828(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_0293f5a8(object, descriptor);
    }
    return object;
}
