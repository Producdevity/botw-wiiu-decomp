extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023552b8(void*, const void*);

extern "C" void* fn_02abe970(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_023552b8(object, descriptor);
    }
    return object;
}
