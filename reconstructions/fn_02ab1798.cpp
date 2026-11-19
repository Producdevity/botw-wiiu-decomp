extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0215a9d0(void*, const void*);

extern "C" void* fn_02ab1798(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(128, allocator, 4);
    if (object) {
        object = fn_0215a9d0(object, descriptor);
    }
    return object;
}
