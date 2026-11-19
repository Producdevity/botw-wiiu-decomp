extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a5e534(void*, const void*);

extern "C" void* fn_02b08e5c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_02a5e534(object, descriptor);
    }
    return object;
}
