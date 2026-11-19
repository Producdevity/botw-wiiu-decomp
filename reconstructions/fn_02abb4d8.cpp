extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022c86ac(void*, const void*);

extern "C" void* fn_02abb4d8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_022c86ac(object, descriptor);
    }
    return object;
}
