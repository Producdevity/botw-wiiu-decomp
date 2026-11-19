extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0283acb0(void*, const void*);

extern "C" void* fn_02ad6208(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_0283acb0(object, descriptor);
    }
    return object;
}
