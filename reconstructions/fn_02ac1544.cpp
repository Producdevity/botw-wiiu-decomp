extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02cefb7c(void*, const void*);

extern "C" void* fn_02ac1544(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02cefb7c(object, descriptor);
    }
    return object;
}
