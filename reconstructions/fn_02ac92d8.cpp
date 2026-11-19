extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024c6624(void*, const void*);

extern "C" void* fn_02ac92d8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(432, allocator, 4);
    if (object) {
        object = fn_024c6624(object, descriptor);
    }
    return object;
}
