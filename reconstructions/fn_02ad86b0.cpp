extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028cf49c(void*, const void*);

extern "C" void* fn_02ad86b0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(176, allocator, 4);
    if (object) {
        object = fn_028cf49c(object, descriptor);
    }
    return object;
}
