extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0219527c(void*, const void*);

extern "C" void* fn_02ab30d4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(32, allocator, 4);
    if (object) {
        object = fn_0219527c(object, descriptor);
    }
    return object;
}
