extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024bdb84(void*, const void*);

extern "C" void* fn_02ac8f20(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(244, allocator, 4);
    if (object) {
        object = fn_024bdb84(object, descriptor);
    }
    return object;
}
