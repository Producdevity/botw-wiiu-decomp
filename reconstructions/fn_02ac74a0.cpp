extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024624d0(void*, const void*);

extern "C" void* fn_02ac74a0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(92, allocator, 4);
    if (object) {
        object = fn_024624d0(object, descriptor);
    }
    return object;
}
