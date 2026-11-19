extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_028275f8(void*, const void*);

extern "C" void* fn_02ad5e50(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(456, allocator, 4);
    if (object) {
        object = fn_028275f8(object, descriptor);
    }
    return object;
}
