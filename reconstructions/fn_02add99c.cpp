extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029b6d80(void*, const void*);

extern "C" void* fn_02add99c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(24, allocator, 4);
    if (object) {
        object = fn_029b6d80(object, descriptor);
    }
    return object;
}
