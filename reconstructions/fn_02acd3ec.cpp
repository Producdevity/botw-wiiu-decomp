extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025fe40c(void*, const void*);

extern "C" void* fn_02acd3ec(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_025fe40c(object, descriptor);
    }
    return object;
}
