extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02454f20(void*, const void*);

extern "C" void* fn_02ac701c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(112, allocator, 4);
    if (object) {
        object = fn_02454f20(object, descriptor);
    }
    return object;
}
