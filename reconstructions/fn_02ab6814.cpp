extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02205188(void*, const void*);

extern "C" void* fn_02ab6814(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(112, allocator, 4);
    if (object) {
        object = fn_02205188(object, descriptor);
    }
    return object;
}
