extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024c0114(void*, const void*);

extern "C" void* fn_02ac8fa8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(236, allocator, 4);
    if (object) {
        object = fn_024c0114(object, descriptor);
    }
    return object;
}
