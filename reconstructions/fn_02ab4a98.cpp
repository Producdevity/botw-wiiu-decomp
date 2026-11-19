extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021d1958(void*, const void*);

extern "C" void* fn_02ab4a98(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(128, allocator, 4);
    if (object) {
        object = fn_021d1958(object, descriptor);
    }
    return object;
}
