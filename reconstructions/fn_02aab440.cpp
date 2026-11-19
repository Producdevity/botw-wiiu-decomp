extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032b34c0(void*, const void*);

extern "C" void* fn_02aab440(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(28, allocator, 4);
    if (object) {
        object = fn_032b34c0(object, descriptor);
    }
    return object;
}
