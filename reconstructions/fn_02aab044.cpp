extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_032c07e8(void*, const void*);

extern "C" void* fn_02aab044(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_032c07e8(object, descriptor);
    }
    return object;
}
