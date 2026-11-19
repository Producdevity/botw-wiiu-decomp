extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021bf924(void*, const void*);

extern "C" void* fn_02ab436c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_021bf924(object, descriptor);
    }
    return object;
}
