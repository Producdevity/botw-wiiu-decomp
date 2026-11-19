extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0216649c(void*, const void*);

extern "C" void* fn_02ab1e80(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(180, allocator, 4);
    if (object) {
        object = fn_0216649c(object, descriptor);
    }
    return object;
}
