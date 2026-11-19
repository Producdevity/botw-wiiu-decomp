extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02189cdc(void*, const void*);

extern "C" void* fn_02ab2de8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_02189cdc(object, descriptor);
    }
    return object;
}
