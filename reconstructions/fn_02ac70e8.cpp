extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02457874(void*, const void*);

extern "C" void* fn_02ac70e8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(112, allocator, 4);
    if (object) {
        object = fn_02457874(object, descriptor);
    }
    return object;
}
