extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028efbc8(void*, const void*);

extern "C" void* fn_02ad8c44(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(60, allocator, 4);
    if (object) {
        object = fn_028efbc8(object, descriptor);
    }
    return object;
}
