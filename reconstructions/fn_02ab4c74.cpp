extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021d47f8(void*, const void*);

extern "C" void* fn_02ab4c74(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_021d47f8(object, descriptor);
    }
    return object;
}
