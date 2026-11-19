extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021c5f84(void*, const void*);

extern "C" void* fn_02ab469c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_021c5f84(object, descriptor);
    }
    return object;
}
