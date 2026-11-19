extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_029dce50(void*, const void*);

extern "C" void* fn_02add1e8(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(72, allocator, 4);
    if (object) {
        object = fn_029dce50(object, descriptor);
    }
    return object;
}
