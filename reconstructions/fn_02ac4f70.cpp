extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023edc34(void*, const void*);

extern "C" void* fn_02ac4f70(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(108, allocator, 4);
    if (object) {
        object = fn_023edc34(object, descriptor);
    }
    return object;
}
