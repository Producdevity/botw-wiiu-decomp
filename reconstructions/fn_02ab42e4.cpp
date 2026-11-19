extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021be558(void*, const void*);

extern "C" void* fn_02ab42e4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_021be558(object, descriptor);
    }
    return object;
}
