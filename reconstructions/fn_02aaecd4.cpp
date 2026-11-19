extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0210f0c0(void*, const void*);

extern "C" void* fn_02aaecd4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(172, allocator, 4);
    if (object) {
        object = fn_0210f0c0(object, descriptor);
    }
    return object;
}
