extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02883e80(void*, const void*);

extern "C" void* fn_02ad74a0(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(36, allocator, 4);
    if (object) {
        object = fn_02883e80(object, descriptor);
    }
    return object;
}
