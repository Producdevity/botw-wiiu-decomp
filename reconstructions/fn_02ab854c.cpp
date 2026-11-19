extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0223efd8(void*, const void*);

extern "C" void* fn_02ab854c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(88, allocator, 4);
    if (object) {
        object = fn_0223efd8(object, descriptor);
    }
    return object;
}
