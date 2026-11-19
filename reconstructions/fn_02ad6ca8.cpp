extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0286178c(void*, const void*);

extern "C" void* fn_02ad6ca8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_0286178c(object, descriptor);
    }
    return object;
}
