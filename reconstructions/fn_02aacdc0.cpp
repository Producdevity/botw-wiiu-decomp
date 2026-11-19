extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020b5f9c(void*, const void*);

extern "C" void* fn_02aacdc0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(368, allocator, 4);
    if (object) {
        object = fn_020b5f9c(object, descriptor);
    }
    return object;
}
