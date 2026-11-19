extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024faf5c(void*, const void*);

extern "C" void* fn_02aca174(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(956, allocator, 4);
    if (object) {
        object = fn_024faf5c(object, descriptor);
    }
    return object;
}
