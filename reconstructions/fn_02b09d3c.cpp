extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a7e818(void*, const void*);

extern "C" void* fn_02b09d3c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02a7e818(object, descriptor);
    }
    return object;
}
