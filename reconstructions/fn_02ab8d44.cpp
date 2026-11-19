extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02258658(void*, const void*);

extern "C" void* fn_02ab8d44(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_02258658(object, descriptor);
    }
    return object;
}
