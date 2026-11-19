extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02884b3c(void*, const void*);

extern "C" void* fn_02ad74e4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(700, allocator, 4);
    if (object) {
        object = fn_02884b3c(object, descriptor);
    }
    return object;
}
