extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_02c945d8(void*, const void*);

extern "C" void* fn_02abfbc4(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(20, allocator, 4);
    if (object) {
        object = fn_02c945d8(object, descriptor);
    }
    return object;
}
