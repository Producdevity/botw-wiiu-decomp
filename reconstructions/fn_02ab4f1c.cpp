extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021d9078(void*, const void*);

extern "C" void* fn_02ab4f1c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(88, allocator, 4);
    if (object) {
        object = fn_021d9078(object, descriptor);
    }
    return object;
}
