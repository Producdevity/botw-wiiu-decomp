extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c9857c(void*, const void*);

extern "C" void* fn_02abfd18(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_02c9857c(object, descriptor);
    }
    return object;
}
