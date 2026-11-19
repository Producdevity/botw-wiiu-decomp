extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028fb02c(void*, const void*);

extern "C" void* fn_02ad8ddc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(104, allocator, 4);
    if (object) {
        object = fn_028fb02c(object, descriptor);
    }
    return object;
}
