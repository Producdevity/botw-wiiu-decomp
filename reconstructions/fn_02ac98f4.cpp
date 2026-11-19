extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_024dcb4c(void*, const void*);

extern "C" void* fn_02ac98f4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(168, allocator, 4);
    if (object) {
        object = fn_024dcb4c(object, descriptor);
    }
    return object;
}
