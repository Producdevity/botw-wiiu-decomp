extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_03115124(void*, const void*);

extern "C" void* fn_02aaa9a0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_03115124(object, descriptor);
    }
    return object;
}
