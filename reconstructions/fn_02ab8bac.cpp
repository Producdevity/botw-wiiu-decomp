extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022541a0(void*, const void*);

extern "C" void* fn_02ab8bac(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_022541a0(object, descriptor);
    }
    return object;
}
