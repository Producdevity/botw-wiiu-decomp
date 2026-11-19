extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a5804c(void*, const void*);

extern "C" void* fn_02b08bf8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_02a5804c(object, descriptor);
    }
    return object;
}
