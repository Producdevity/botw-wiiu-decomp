extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021f8444(void*, const void*);

extern "C" void* fn_02ab61b4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(168, allocator, 4);
    if (object) {
        object = fn_021f8444(object, descriptor);
    }
    return object;
}
