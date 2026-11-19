extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029db2bc(void*, const void*);

extern "C" void* fn_02adfd78(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(232, allocator, 4);
    if (object) {
        object = fn_029db2bc(object, descriptor);
    }
    return object;
}
