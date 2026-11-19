extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0219e184(void*, const void*);

extern "C" void* fn_02ab348c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_0219e184(object, descriptor);
    }
    return object;
}
