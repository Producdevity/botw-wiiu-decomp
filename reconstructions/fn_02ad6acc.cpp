extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02858b9c(void*, const void*);

extern "C" void* fn_02ad6acc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(100, allocator, 4);
    if (object) {
        object = fn_02858b9c(object, descriptor);
    }
    return object;
}
