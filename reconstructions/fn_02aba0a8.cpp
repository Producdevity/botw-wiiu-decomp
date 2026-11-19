extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0227cdec(void*, const void*);

extern "C" void* fn_02aba0a8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(148, allocator, 4);
    if (object) {
        object = fn_0227cdec(object, descriptor);
    }
    return object;
}
