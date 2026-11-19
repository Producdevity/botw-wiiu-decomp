extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0223c96c(void*, const void*);

extern "C" void* fn_02ab83b4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(92, allocator, 4);
    if (object) {
        object = fn_0223c96c(object, descriptor);
    }
    return object;
}
