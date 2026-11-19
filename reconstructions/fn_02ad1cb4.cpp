extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_026e59e4(void*, const void*);

extern "C" void* fn_02ad1cb4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(160, allocator, 4);
    if (object) {
        object = fn_026e59e4(object, descriptor);
    }
    return object;
}
