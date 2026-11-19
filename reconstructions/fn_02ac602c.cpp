extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02424aac(void*, const void*);

extern "C" void* fn_02ac602c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(52, allocator, 4);
    if (object) {
        object = fn_02424aac(object, descriptor);
    }
    return object;
}
