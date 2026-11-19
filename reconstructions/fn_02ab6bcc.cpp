extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0220d54c(void*, const void*);

extern "C" void* fn_02ab6bcc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_0220d54c(object, descriptor);
    }
    return object;
}
