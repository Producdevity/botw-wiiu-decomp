extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02429a1c(void*, const void*);

extern "C" void* fn_02ac60f8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(76, allocator, 4);
    if (object) {
        object = fn_02429a1c(object, descriptor);
    }
    return object;
}
