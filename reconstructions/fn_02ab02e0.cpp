extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02bf2d24(void*, const void*);

extern "C" void* fn_02ab02e0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(492, allocator, 4);
    if (object) {
        object = fn_02bf2d24(object, descriptor);
    }
    return object;
}
