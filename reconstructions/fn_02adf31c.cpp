extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029d3f08(void*, const void*);

extern "C" void* fn_02adf31c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(80, allocator, 4);
    if (object) {
        object = fn_029d3f08(object, descriptor);
    }
    return object;
}
