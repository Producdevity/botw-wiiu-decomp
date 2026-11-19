extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022a0ce4(void*, const void*);

extern "C" void* fn_02aba9f4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(116, allocator, 4);
    if (object) {
        object = fn_022a0ce4(object, descriptor);
    }
    return object;
}
