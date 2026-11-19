extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0244b4bc(void*, const void*);

extern "C" void* fn_02ac6c20(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_0244b4bc(object, descriptor);
    }
    return object;
}
