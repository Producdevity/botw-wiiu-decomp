extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02240434(void*, const void*);

extern "C" void* fn_02ab8590(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(148, allocator, 4);
    if (object) {
        object = fn_02240434(object, descriptor);
    }
    return object;
}
