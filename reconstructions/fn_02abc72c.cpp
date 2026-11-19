extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02300aa8(void*, const void*);

extern "C" void* fn_02abc72c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(152, allocator, 4);
    if (object) {
        object = fn_02300aa8(object, descriptor);
    }
    return object;
}
