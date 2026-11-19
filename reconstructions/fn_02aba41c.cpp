extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02296d04(void*, const void*);

extern "C" void* fn_02aba41c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_02296d04(object, descriptor);
    }
    return object;
}
