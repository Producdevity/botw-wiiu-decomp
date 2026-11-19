extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0279449c(void*, const void*);

extern "C" void* fn_02ad3b40(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(64, allocator, 4);
    if (object) {
        object = fn_0279449c(object, descriptor);
    }
    return object;
}
