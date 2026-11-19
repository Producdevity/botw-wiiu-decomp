extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021bcbfc(void*, const void*);

extern "C" void* fn_02ab4190(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_021bcbfc(object, descriptor);
    }
    return object;
}
