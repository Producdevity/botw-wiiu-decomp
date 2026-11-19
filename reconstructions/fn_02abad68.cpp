extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022a86d8(void*, const void*);

extern "C" void* fn_02abad68(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_022a86d8(object, descriptor);
    }
    return object;
}
