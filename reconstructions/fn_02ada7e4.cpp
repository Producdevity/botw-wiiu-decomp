extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0293f038(void*, const void*);

extern "C" void* fn_02ada7e4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(148, allocator, 4);
    if (object) {
        object = fn_0293f038(object, descriptor);
    }
    return object;
}
