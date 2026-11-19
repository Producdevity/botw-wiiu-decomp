extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02800c48(void*, const void*);

extern "C" void* fn_02ad569c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(232, allocator, 4);
    if (object) {
        object = fn_02800c48(object, descriptor);
    }
    return object;
}
