extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_022a3314(void*, const void*);

extern "C" void* fn_02abab8c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(120, allocator, 4);
    if (object) {
        object = fn_022a3314(object, descriptor);
    }
    return object;
}
