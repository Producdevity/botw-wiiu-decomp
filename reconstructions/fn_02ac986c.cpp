extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024d8430(void*, const void*);

extern "C" void* fn_02ac986c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(112, allocator, 4);
    if (object) {
        object = fn_024d8430(object, descriptor);
    }
    return object;
}
