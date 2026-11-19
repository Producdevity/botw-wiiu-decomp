extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022a23e8(void*, const void*);

extern "C" void* fn_02abace0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(96, allocator, 4);
    if (object) {
        object = fn_022a23e8(object, descriptor);
    }
    return object;
}
