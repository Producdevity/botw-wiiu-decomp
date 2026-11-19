extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0215f2dc(void*, const void*);

extern "C" void* fn_02ab1a40(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(152, allocator, 4);
    if (object) {
        object = fn_0215f2dc(object, descriptor);
    }
    return object;
}
