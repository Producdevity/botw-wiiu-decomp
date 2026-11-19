extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02415408(void*, const void*);

extern "C" void* fn_02ac5bec(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(100, allocator, 4);
    if (object) {
        object = fn_02415408(object, descriptor);
    }
    return object;
}
