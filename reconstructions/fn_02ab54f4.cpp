extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0207bb5c(void*, const void*);

extern "C" void* fn_02ab54f4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_0207bb5c(object, descriptor);
    }
    return object;
}
