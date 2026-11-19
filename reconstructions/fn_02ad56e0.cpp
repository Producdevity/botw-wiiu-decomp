extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028055e0(void*, const void*);

extern "C" void* fn_02ad56e0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(220, allocator, 4);
    if (object) {
        object = fn_028055e0(object, descriptor);
    }
    return object;
}
