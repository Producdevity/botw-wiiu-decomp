extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0291635c(void*, const void*);

extern "C" void* fn_02ad987c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_0291635c(object, descriptor);
    }
    return object;
}
