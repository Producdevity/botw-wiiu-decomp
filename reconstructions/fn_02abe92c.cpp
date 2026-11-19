extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02354a34(void*, const void*);

extern "C" void* fn_02abe92c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_02354a34(object, descriptor);
    }
    return object;
}
