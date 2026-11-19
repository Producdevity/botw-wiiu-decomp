extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02890220(void*, const void*);

extern "C" void* fn_02ad789c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_02890220(object, descriptor);
    }
    return object;
}
