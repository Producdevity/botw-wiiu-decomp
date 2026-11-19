extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_025cba50(void*, const void*);

extern "C" void* fn_02acd82c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_025cba50(object, descriptor);
    }
    return object;
}
