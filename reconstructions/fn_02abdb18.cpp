extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0230640c(void*, const void*);

extern "C" void* fn_02abdb18(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(116, allocator, 4);
    if (object) {
        object = fn_0230640c(object, descriptor);
    }
    return object;
}
