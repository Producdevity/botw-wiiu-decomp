extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028bca70(void*, const void*);

extern "C" void* fn_02ad84d4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(100, allocator, 4);
    if (object) {
        object = fn_028bca70(object, descriptor);
    }
    return object;
}
