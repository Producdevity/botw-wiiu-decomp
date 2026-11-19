extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02a5b7dc(void*, const void*);

extern "C" void* fn_02b08d4c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02a5b7dc(object, descriptor);
    }
    return object;
}
