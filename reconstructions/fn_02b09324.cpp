extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a66fc0(void*, const void*);

extern "C" void* fn_02b09324(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_02a66fc0(object, descriptor);
    }
    return object;
}
