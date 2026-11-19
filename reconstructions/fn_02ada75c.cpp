extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0293bd1c(void*, const void*);

extern "C" void* fn_02ada75c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(128, allocator, 4);
    if (object) {
        object = fn_0293bd1c(object, descriptor);
    }
    return object;
}
