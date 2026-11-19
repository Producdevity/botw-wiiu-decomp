extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022746ec(void*, const void*);

extern "C" void* fn_02ab9be0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_022746ec(object, descriptor);
    }
    return object;
}
