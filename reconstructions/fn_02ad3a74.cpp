extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0278c734(void*, const void*);

extern "C" void* fn_02ad3a74(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(124, allocator, 4);
    if (object) {
        object = fn_0278c734(object, descriptor);
    }
    return object;
}
