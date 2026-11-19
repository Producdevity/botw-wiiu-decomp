extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026e3f7c(void*, const void*);

extern "C" void* fn_02ad1c2c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(100, allocator, 4);
    if (object) {
        object = fn_026e3f7c(object, descriptor);
    }
    return object;
}
