extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025b32e4(void*, const void*);

extern "C" void* fn_02acd4b8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(724, allocator, 4);
    if (object) {
        object = fn_025b32e4(object, descriptor);
    }
    return object;
}
