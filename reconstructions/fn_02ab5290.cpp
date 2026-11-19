extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021ddea0(void*, const void*);

extern "C" void* fn_02ab5290(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_021ddea0(object, descriptor);
    }
    return object;
}
