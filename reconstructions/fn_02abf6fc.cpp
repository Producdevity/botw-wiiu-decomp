extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c86c3c(void*, const void*);

extern "C" void* fn_02abf6fc(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02c86c3c(object, descriptor);
    }
    return object;
}
