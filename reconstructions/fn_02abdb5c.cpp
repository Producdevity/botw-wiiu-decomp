extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02307db8(void*, const void*);

extern "C" void* fn_02abdb5c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(128, allocator, 4);
    if (object) {
        object = fn_02307db8(object, descriptor);
    }
    return object;
}
