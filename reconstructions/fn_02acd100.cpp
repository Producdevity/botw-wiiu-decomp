extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0259e49c(void*, const void*);

extern "C" void* fn_02acd100(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_0259e49c(object, descriptor);
    }
    return object;
}
