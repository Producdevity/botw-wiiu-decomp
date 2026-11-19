extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0292417c(void*, const void*);

extern "C" void* fn_02ad9e54(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(48, allocator, 4);
    if (object) {
        object = fn_0292417c(object, descriptor);
    }
    return object;
}
