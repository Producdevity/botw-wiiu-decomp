extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0217fa9c(void*, const void*);

extern "C" void* fn_02ab2a30(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(260, allocator, 4);
    if (object) {
        object = fn_0217fa9c(object, descriptor);
    }
    return object;
}
