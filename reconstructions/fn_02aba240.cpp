extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022847bc(void*, const void*);

extern "C" void* fn_02aba240(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(92, allocator, 4);
    if (object) {
        object = fn_022847bc(object, descriptor);
    }
    return object;
}
