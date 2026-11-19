extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021cbb94(void*, const void*);

extern "C" void* fn_02ab4878(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(160, allocator, 4);
    if (object) {
        object = fn_021cbb94(object, descriptor);
    }
    return object;
}
