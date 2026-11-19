extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_027e2e88(void*, const void*);

extern "C" void* fn_02ad4844(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_027e2e88(object, descriptor);
    }
    return object;
}
