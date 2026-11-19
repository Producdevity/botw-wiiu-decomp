extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02624128(void*, const void*);

extern "C" void* fn_02acec18(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(144, allocator, 4);
    if (object) {
        object = fn_02624128(object, descriptor);
    }
    return object;
}
