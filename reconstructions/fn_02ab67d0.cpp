extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0220475c(void*, const void*);

extern "C" void* fn_02ab67d0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_0220475c(object, descriptor);
    }
    return object;
}
