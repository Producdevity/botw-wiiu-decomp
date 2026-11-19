extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0236405c(void*, const void*);

extern "C" void* fn_02ac1c2c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(420, allocator, 4);
    if (object) {
        object = fn_0236405c(object, descriptor);
    }
    return object;
}
