extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022285c4(void*, const void*);

extern "C" void* fn_02ab7d10(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_022285c4(object, descriptor);
    }
    return object;
}
