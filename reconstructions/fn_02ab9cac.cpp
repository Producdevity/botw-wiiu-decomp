extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02273768(void*, const void*);

extern "C" void* fn_02ab9cac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(288, allocator, 4);
    if (object) {
        object = fn_02273768(object, descriptor);
    }
    return object;
}
