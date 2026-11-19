extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020dce4c(void*, const void*);

extern "C" void* fn_02aade7c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(140, allocator, 4);
    if (object) {
        object = fn_020dce4c(object, descriptor);
    }
    return object;
}
