extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029da00c(void*, const void*);

extern "C" void* fn_02adfbe0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(40, allocator, 4);
    if (object) {
        object = fn_029da00c(object, descriptor);
    }
    return object;
}
