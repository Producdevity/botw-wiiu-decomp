extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024bce88(void*, const void*);

extern "C" void* fn_02ac8e98(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_024bce88(object, descriptor);
    }
    return object;
}
