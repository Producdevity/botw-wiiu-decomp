extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a8d18c(void*, const void*);

extern "C" void* fn_02b0a3e0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02a8d18c(object, descriptor);
    }
    return object;
}
