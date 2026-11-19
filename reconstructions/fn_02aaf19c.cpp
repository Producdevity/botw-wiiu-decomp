extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0211c91c(void*, const void*);

extern "C" void* fn_02aaf19c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(108, allocator, 4);
    if (object) {
        object = fn_0211c91c(object, descriptor);
    }
    return object;
}
