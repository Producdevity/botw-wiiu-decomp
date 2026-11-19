extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025a4d98(void*, const void*);

extern "C" void* fn_02acd1cc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(2512, allocator, 4);
    if (object) {
        object = fn_025a4d98(object, descriptor);
    }
    return object;
}
