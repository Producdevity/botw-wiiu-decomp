extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0230e6ec(void*, const void*);

extern "C" void* fn_02abc9d4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(16, allocator, 4);
    if (object) {
        object = fn_0230e6ec(object, descriptor);
    }
    return object;
}
