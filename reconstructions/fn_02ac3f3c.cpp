extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023b68e4(void*, const void*);

extern "C" void* fn_02ac3f3c(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(160, allocator, 4);
    if (object) {
        object = fn_023b68e4(object, descriptor);
    }
    return object;
}
