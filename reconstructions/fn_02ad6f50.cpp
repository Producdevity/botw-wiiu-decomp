extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028708f0(void*, const void*);

extern "C" void* fn_02ad6f50(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(68, allocator, 4);
    if (object) {
        object = fn_028708f0(object, descriptor);
    }
    return object;
}
