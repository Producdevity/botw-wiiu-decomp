extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024c57a8(void*, const void*);

extern "C" void* fn_02ac920c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_024c57a8(object, descriptor);
    }
    return object;
}
