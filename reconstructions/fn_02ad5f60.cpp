extern "C" void* fn_0308e5a0(unsigned int, void*, int);
extern "C" void* fn_0282cfa8(void*, const void*);

extern "C" void* fn_02ad5f60(const void* descriptor, void* allocator) {
    void* object = fn_0308e5a0(80, allocator, 4);
    if (object) {
        object = fn_0282cfa8(object, descriptor);
    }
    return object;
}
