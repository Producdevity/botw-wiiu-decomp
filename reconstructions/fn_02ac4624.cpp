extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023cf174(void*, const void*);

extern "C" void* fn_02ac4624(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(124, allocator, 4);
    if (object) {
        object = fn_023cf174(object, descriptor);
    }
    return object;
}
