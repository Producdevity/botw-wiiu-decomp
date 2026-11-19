extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02564b98(void*, const void*);

extern "C" void* fn_02acc2ec(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_02564b98(object, descriptor);
    }
    return object;
}
