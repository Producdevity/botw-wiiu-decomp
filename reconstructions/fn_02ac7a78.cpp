extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022ace98(void*, const void*);

extern "C" void* fn_02ac7a78(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_022ace98(object, descriptor);
    }
    return object;
}
