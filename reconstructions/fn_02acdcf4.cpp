extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025e3068(void*, const void*);

extern "C" void* fn_02acdcf4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_025e3068(object, descriptor);
    }
    return object;
}
