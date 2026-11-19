extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021bb858(void*, const void*);

extern "C" void* fn_02ab40c4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_021bb858(object, descriptor);
    }
    return object;
}
