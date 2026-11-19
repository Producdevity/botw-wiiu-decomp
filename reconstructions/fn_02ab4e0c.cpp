extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021d73f4(void*, const void*);

extern "C" void* fn_02ab4e0c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(116, allocator, 4);
    if (object) {
        object = fn_021d73f4(object, descriptor);
    }
    return object;
}
