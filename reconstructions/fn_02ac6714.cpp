extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0243bf6c(void*, const void*);

extern "C" void* fn_02ac6714(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(112, allocator, 4);
    if (object) {
        object = fn_0243bf6c(object, descriptor);
    }
    return object;
}
