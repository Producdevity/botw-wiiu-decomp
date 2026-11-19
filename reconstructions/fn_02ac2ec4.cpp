extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02396a78(void*, const void*);

extern "C" void* fn_02ac2ec4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(156, allocator, 4);
    if (object) {
        object = fn_02396a78(object, descriptor);
    }
    return object;
}
