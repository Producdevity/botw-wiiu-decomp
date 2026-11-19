extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022bff5c(void*, const void*);

extern "C" void* fn_02aae454(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(136, allocator, 4);
    if (object) {
        object = fn_022bff5c(object, descriptor);
    }
    return object;
}
