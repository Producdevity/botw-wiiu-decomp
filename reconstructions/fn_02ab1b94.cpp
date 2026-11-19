extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02160b10(void*, const void*);

extern "C" void* fn_02ab1b94(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(236, allocator, 4);
    if (object) {
        object = fn_02160b10(object, descriptor);
    }
    return object;
}
