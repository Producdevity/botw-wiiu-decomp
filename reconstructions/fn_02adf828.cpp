extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029d6f2c(void*, const void*);

extern "C" void* fn_02adf828(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_029d6f2c(object, descriptor);
    }
    return object;
}
