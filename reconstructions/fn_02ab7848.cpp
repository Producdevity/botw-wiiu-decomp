extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0221f960(void*, const void*);

extern "C" void* fn_02ab7848(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_0221f960(object, descriptor);
    }
    return object;
}
