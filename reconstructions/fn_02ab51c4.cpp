extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021dd3ec(void*, const void*);

extern "C" void* fn_02ab51c4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_021dd3ec(object, descriptor);
    }
    return object;
}
