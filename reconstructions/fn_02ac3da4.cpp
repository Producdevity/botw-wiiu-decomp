extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_023b36f0(void*, const void*);

extern "C" void* fn_02ac3da4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_023b36f0(object, descriptor);
    }
    return object;
}
