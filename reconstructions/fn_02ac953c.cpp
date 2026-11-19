extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024cc518(void*, const void*);

extern "C" void* fn_02ac953c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(284, allocator, 4);
    if (object) {
        object = fn_024cc518(object, descriptor);
    }
    return object;
}
