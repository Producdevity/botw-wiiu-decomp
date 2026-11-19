extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029174ec(void*, const void*);

extern "C" void* fn_02ad9904(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_029174ec(object, descriptor);
    }
    return object;
}
