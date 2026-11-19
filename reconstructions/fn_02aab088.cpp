extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_03264bc8(void*, const void*);

extern "C" void* fn_02aab088(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(196, allocator, 4);
    if (object) {
        object = fn_03264bc8(object, descriptor);
    }
    return object;
}
