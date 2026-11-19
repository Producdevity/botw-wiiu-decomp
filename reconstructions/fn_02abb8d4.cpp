extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022d2e00(void*, const void*);

extern "C" void* fn_02abb8d4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(152, allocator, 4);
    if (object) {
        object = fn_022d2e00(object, descriptor);
    }
    return object;
}
