extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021bc618(void*, const void*);

extern "C" void* fn_02ab414c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_021bc618(object, descriptor);
    }
    return object;
}
