extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0213062c(void*, const void*);

extern "C" void* fn_02aaf664(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_0213062c(object, descriptor);
    }
    return object;
}
