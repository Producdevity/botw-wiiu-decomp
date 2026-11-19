extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022e8e6c(void*, const void*);

extern "C" void* fn_02abbd9c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_022e8e6c(object, descriptor);
    }
    return object;
}
