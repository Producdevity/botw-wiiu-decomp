extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0260d0fc(void*, const void*);

extern "C" void* fn_02ace684(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(344, allocator, 4);
    if (object) {
        object = fn_0260d0fc(object, descriptor);
    }
    return object;
}
