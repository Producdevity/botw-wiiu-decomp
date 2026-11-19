extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0244b974(void*, const void*);

extern "C" void* fn_02ac6c64(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_0244b974(object, descriptor);
    }
    return object;
}
