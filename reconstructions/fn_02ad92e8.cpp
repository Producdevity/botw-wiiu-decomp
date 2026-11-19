extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02907718(void*, const void*);

extern "C" void* fn_02ad92e8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(608, allocator, 4);
    if (object) {
        object = fn_02907718(object, descriptor);
    }
    return object;
}
