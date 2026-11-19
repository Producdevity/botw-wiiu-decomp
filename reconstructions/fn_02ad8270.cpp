extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028ab530(void*, const void*);

extern "C" void* fn_02ad8270(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(368, allocator, 4);
    if (object) {
        object = fn_028ab530(object, descriptor);
    }
    return object;
}
