extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022adf20(void*, const void*);

extern "C" void* fn_02abb054(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(2240, allocator, 4);
    if (object) {
        object = fn_022adf20(object, descriptor);
    }
    return object;
}
