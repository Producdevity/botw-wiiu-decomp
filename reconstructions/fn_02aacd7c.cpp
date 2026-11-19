extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_020b5024(void*, const void*);

extern "C" void* fn_02aacd7c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_020b5024(object, descriptor);
    }
    return object;
}
