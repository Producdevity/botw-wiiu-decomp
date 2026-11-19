extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02180c00(void*, const void*);

extern "C" void* fn_02ab2a74(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_02180c00(object, descriptor);
    }
    return object;
}
