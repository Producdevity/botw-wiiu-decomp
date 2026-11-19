extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029b3a70(void*, const void*);

extern "C" void* fn_02add66c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_029b3a70(object, descriptor);
    }
    return object;
}
