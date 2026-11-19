extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0271a6bc(void*, const void*);

extern "C" void* fn_02ad2358(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_0271a6bc(object, descriptor);
    }
    return object;
}
