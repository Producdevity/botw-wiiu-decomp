extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028cf10c(void*, const void*);

extern "C" void* fn_02ad866c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_028cf10c(object, descriptor);
    }
    return object;
}
