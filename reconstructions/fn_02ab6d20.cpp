extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0220e7e8(void*, const void*);

extern "C" void* fn_02ab6d20(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(56, allocator, 4);
    if (object) {
        object = fn_0220e7e8(object, descriptor);
    }
    return object;
}
