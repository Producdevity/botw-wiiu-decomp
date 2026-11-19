extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02427774(void*, const void*);

extern "C" void* fn_02ac6208(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02427774(object, descriptor);
    }
    return object;
}
