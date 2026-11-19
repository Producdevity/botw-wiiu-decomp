extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0222cef0(void*, const void*);

extern "C" void* fn_02ab7e64(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(196, allocator, 4);
    if (object) {
        object = fn_0222cef0(object, descriptor);
    }
    return object;
}
