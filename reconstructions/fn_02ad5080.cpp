extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02d2c388(void*, const void*);

extern "C" void* fn_02ad5080(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_02d2c388(object, descriptor);
    }
    return object;
}
