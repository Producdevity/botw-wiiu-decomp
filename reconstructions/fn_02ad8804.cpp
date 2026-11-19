extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028e11d0(void*, const void*);

extern "C" void* fn_02ad8804(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(144, allocator, 4);
    if (object) {
        object = fn_028e11d0(object, descriptor);
    }
    return object;
}
