extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0292189c(void*, const void*);

extern "C" void* fn_02ad9d44(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_0292189c(object, descriptor);
    }
    return object;
}
