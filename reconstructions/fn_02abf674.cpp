extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c85388(void*, const void*);

extern "C" void* fn_02abf674(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02c85388(object, descriptor);
    }
    return object;
}
