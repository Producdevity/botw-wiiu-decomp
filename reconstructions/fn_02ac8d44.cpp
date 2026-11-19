extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032dde2c(void*, const void*);

extern "C" void* fn_02ac8d44(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_032dde2c(object, descriptor);
    }
    return object;
}
