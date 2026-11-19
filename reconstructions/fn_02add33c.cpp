extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029b1f7c(void*, const void*);

extern "C" void* fn_02add33c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_029b1f7c(object, descriptor);
    }
    return object;
}
