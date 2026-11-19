extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02758d3c(void*, const void*);

extern "C" void* fn_02ad30e4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_02758d3c(object, descriptor);
    }
    return object;
}
