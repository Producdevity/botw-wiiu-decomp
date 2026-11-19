extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029d7a24(void*, const void*);

extern "C" void* fn_02adf938(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(160, allocator, 4);
    if (object) {
        object = fn_029d7a24(object, descriptor);
    }
    return object;
}
