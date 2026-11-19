extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023b4660(void*, const void*);

extern "C" void* fn_02ac3e2c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_023b4660(object, descriptor);
    }
    return object;
}
