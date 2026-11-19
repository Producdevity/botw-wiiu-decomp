extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0227f75c(void*, const void*);

extern "C" void* fn_02aba1b8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_0227f75c(object, descriptor);
    }
    return object;
}
