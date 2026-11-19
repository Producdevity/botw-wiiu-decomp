extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a6869c(void*, const void*);

extern "C" void* fn_02b093f0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_02a6869c(object, descriptor);
    }
    return object;
}
