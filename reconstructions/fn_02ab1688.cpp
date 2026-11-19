extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02159424(void*, const void*);

extern "C" void* fn_02ab1688(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(144, allocator, 4);
    if (object) {
        object = fn_02159424(object, descriptor);
    }
    return object;
}
