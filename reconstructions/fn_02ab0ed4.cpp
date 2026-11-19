extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021493cc(void*, const void*);

extern "C" void* fn_02ab0ed4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_021493cc(object, descriptor);
    }
    return object;
}
