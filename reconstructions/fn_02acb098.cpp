extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c02128(void*, const void*);

extern "C" void* fn_02acb098(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(136, allocator, 4);
    if (object) {
        object = fn_02c02128(object, descriptor);
    }
    return object;
}
