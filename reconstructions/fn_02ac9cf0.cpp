extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024e8664(void*, const void*);

extern "C" void* fn_02ac9cf0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(168, allocator, 4);
    if (object) {
        object = fn_024e8664(object, descriptor);
    }
    return object;
}
