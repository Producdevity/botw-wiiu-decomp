extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032c205c(void*, const void*);

extern "C" void* fn_02ac8948(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(80, allocator, 4);
    if (object) {
        object = fn_032c205c(object, descriptor);
    }
    return object;
}
