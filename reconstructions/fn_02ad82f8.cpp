extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028ac944(void*, const void*);

extern "C" void* fn_02ad82f8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(112, allocator, 4);
    if (object) {
        object = fn_028ac944(object, descriptor);
    }
    return object;
}
