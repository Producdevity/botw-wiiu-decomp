extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02228fa8(void*, const void*);

extern "C" void* fn_02ab7d54(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_02228fa8(object, descriptor);
    }
    return object;
}
