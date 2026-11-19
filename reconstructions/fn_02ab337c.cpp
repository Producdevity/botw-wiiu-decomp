extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0219c7a8(void*, const void*);

extern "C" void* fn_02ab337c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_0219c7a8(object, descriptor);
    }
    return object;
}
