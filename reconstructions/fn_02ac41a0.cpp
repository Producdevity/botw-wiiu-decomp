extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023bea7c(void*, const void*);

extern "C" void* fn_02ac41a0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(112, allocator, 4);
    if (object) {
        object = fn_023bea7c(object, descriptor);
    }
    return object;
}
