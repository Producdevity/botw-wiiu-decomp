extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0258c97c(void*, const void*);

extern "C" void* fn_02accd8c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_0258c97c(object, descriptor);
    }
    return object;
}
