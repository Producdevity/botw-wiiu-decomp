extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0211819c(void*, const void*);

extern "C" void* fn_02aaf08c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(164, allocator, 4);
    if (object) {
        object = fn_0211819c(object, descriptor);
    }
    return object;
}
