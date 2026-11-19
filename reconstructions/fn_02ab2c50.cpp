extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02185bf4(void*, const void*);

extern "C" void* fn_02ab2c50(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(264, allocator, 4);
    if (object) {
        object = fn_02185bf4(object, descriptor);
    }
    return object;
}
