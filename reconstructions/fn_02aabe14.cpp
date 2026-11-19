extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_03328e18(void*, const void*);

extern "C" void* fn_02aabe14(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_03328e18(object, descriptor);
    }
    return object;
}
