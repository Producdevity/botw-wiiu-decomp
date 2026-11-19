extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020915c4(void*, const void*);

extern "C" void* fn_02ac2d2c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_020915c4(object, descriptor);
    }
    return object;
}
