extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028c323c(void*, const void*);

extern "C" void* fn_02ad8160(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(912, allocator, 4);
    if (object) {
        object = fn_028c323c(object, descriptor);
    }
    return object;
}
