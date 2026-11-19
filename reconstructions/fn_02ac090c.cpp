extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02cc9f28(void*, const void*);

extern "C" void* fn_02ac090c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02cc9f28(object, descriptor);
    }
    return object;
}
