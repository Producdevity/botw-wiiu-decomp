extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028f695c(void*, const void*);

extern "C" void* fn_02ad8d10(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(108, allocator, 4);
    if (object) {
        object = fn_028f695c(object, descriptor);
    }
    return object;
}
