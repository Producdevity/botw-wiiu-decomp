extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020d4e7c(void*, const void*);

extern "C" void* fn_02aadb90(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_020d4e7c(object, descriptor);
    }
    return object;
}
