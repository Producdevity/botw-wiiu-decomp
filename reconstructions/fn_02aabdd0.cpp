extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_033281ac(void*, const void*);

extern "C" void* fn_02aabdd0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_033281ac(object, descriptor);
    }
    return object;
}
