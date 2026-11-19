extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028a99a4(void*, const void*);

extern "C" void* fn_02ad81a4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(928, allocator, 4);
    if (object) {
        object = fn_028a99a4(object, descriptor);
    }
    return object;
}
