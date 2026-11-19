extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0225d84c(void*, const void*);

extern "C" void* fn_02ab8fa8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(116, allocator, 4);
    if (object) {
        object = fn_0225d84c(object, descriptor);
    }
    return object;
}
