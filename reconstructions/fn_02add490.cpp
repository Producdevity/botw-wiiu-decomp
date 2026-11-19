extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029b2c0c(void*, const void*);

extern "C" void* fn_02add490(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(236, allocator, 4);
    if (object) {
        object = fn_029b2c0c(object, descriptor);
    }
    return object;
}
