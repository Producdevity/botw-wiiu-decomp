extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024fdf88(void*, const void*);

extern "C" void* fn_02aca284(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(608, allocator, 4);
    if (object) {
        object = fn_024fdf88(object, descriptor);
    }
    return object;
}
