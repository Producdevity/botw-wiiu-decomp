extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c936f8(void*, const void*);

extern "C" void* fn_02abfb3c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02c936f8(object, descriptor);
    }
    return object;
}
