extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022a0950(void*, const void*);

extern "C" void* fn_02aba9b0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(184, allocator, 4);
    if (object) {
        object = fn_022a0950(object, descriptor);
    }
    return object;
}
