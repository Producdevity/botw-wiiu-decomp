extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_021cd59c(void*, const void*);

extern "C" void* fn_02ab4900(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_021cd59c(object, descriptor);
    }
    return object;
}
