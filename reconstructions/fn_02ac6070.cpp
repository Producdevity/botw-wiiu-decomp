extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02424fdc(void*, const void*);

extern "C" void* fn_02ac6070(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_02424fdc(object, descriptor);
    }
    return object;
}
