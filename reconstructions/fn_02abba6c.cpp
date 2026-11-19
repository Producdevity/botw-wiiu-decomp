extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022e0114(void*, const void*);

extern "C" void* fn_02abba6c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_022e0114(object, descriptor);
    }
    return object;
}
