extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020d24a4(void*, const void*);

extern "C" void* fn_02aada3c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(152, allocator, 4);
    if (object) {
        object = fn_020d24a4(object, descriptor);
    }
    return object;
}
