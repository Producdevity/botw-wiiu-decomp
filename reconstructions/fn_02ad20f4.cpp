extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0270769c(void*, const void*);

extern "C" void* fn_02ad20f4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_0270769c(object, descriptor);
    }
    return object;
}
