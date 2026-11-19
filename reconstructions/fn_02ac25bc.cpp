extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02383c14(void*, const void*);

extern "C" void* fn_02ac25bc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02383c14(object, descriptor);
    }
    return object;
}
