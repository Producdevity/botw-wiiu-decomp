extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0230028c(void*, const void*);

extern "C" void* fn_02abc660(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(80, allocator, 4);
    if (object) {
        object = fn_0230028c(object, descriptor);
    }
    return object;
}
