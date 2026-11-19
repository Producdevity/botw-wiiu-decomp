extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0244ec5c(void*, const void*);

extern "C" void* fn_02ac6ec8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(132, allocator, 4);
    if (object) {
        object = fn_0244ec5c(object, descriptor);
    }
    return object;
}
