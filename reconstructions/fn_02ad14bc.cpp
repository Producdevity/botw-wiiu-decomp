extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026c9df8(void*, const void*);

extern "C" void* fn_02ad14bc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_026c9df8(object, descriptor);
    }
    return object;
}
