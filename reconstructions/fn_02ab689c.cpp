extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02205f9c(void*, const void*);

extern "C" void* fn_02ab689c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_02205f9c(object, descriptor);
    }
    return object;
}
