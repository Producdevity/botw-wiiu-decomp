extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0275317c(void*, const void*);

extern "C" void* fn_02ad2f08(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_0275317c(object, descriptor);
    }
    return object;
}
