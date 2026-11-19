extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02226a24(void*, const void*);

extern "C" void* fn_02ab7c44(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(128, allocator, 4);
    if (object) {
        object = fn_02226a24(object, descriptor);
    }
    return object;
}
