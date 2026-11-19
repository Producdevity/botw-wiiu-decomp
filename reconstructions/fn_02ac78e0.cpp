extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0246d9c8(void*, const void*);

extern "C" void* fn_02ac78e0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(44, allocator, 4);
    if (object) {
        object = fn_0246d9c8(object, descriptor);
    }
    return object;
}
