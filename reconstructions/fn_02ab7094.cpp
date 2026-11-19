extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02213a7c(void*, const void*);

extern "C" void* fn_02ab7094(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_02213a7c(object, descriptor);
    }
    return object;
}
