extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0285df4c(void*, const void*);

extern "C" void* fn_02ad6c64(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(540, allocator, 4);
    if (object) {
        object = fn_0285df4c(object, descriptor);
    }
    return object;
}
