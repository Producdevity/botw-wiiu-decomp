extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02086e8c(void*, const void*);

extern "C" void* fn_02abc6a4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_02086e8c(object, descriptor);
    }
    return object;
}
