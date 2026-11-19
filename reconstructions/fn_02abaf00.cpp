extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022e129c(void*, const void*);

extern "C" void* fn_02abaf00(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(220, allocator, 4);
    if (object) {
        object = fn_022e129c(object, descriptor);
    }
    return object;
}
