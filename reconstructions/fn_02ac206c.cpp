extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023710b8(void*, const void*);

extern "C" void* fn_02ac206c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(676, allocator, 4);
    if (object) {
        object = fn_023710b8(object, descriptor);
    }
    return object;
}
