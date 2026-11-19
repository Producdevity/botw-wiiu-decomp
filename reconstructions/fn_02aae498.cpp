extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020f2e58(void*, const void*);

extern "C" void* fn_02aae498(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(200, allocator, 4);
    if (object) {
        object = fn_020f2e58(object, descriptor);
    }
    return object;
}
